#! /usr/bin/env python

# import ros stuff
import rospy
# import ros message
from geometry_msgs.msg import Point
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from tf import transformations
# import ros service
from std_srvs.srv import *
from assignment1.srv import *
from geometry_msgs.msg import Twist
import math
import time

pub = None
srv_client_go_to_point_ = None
srv_client_wall_follower_ = None
srv_client_generate_random_point_=None
yaw_ = 0
yaw_error_allowed_ = 5 * (math.pi / 180) # 5 degrees
position_ = Point()
desired_position_ = Point()
desired_position_.x = rospy.get_param('des_pos_x')
desired_position_.y = rospy.get_param('des_pos_y')
desired_position_.z = 0
regions_ = None
state_desc_ = ['Go to point', 'Wall following','User input']
state_ = 0
ui_=None
time_start=None
# 0 - go to point
# 1 - wall following


# callbacks
def clbk_odom(msg):
    global position_, yaw_
    
    # position
    position_ = msg.pose.pose.position
    
    # yaw
    quaternion = (
        msg.pose.pose.orientation.x,
        msg.pose.pose.orientation.y,
        msg.pose.pose.orientation.z,
        msg.pose.pose.orientation.w)
    euler = transformations.euler_from_quaternion(quaternion)
    yaw_ = euler[2]

def clbk_laser(msg):
    global regions_
    regions_ = {
        'right':  min(min(msg.ranges[0:143]), 10),
        'fright': min(min(msg.ranges[144:287]), 10),
        'front':  min(min(msg.ranges[288:431]), 10),
        'fleft':  min(min(msg.ranges[432:575]), 10),
        'left':   min(min(msg.ranges[576:719]), 10),
    }


def change_state(state):
    global state_, state_desc_
    global srv_client_wall_follower_, srv_client_go_to_point_
    state_ = state
    log = "state changed: %s" % state_desc_[state]
    rospy.loginfo(log)
    if state_ == 0:
        resp = srv_client_go_to_point_(True)
        resp = srv_client_wall_follower_(False)
    if state_ == 1:
        resp = srv_client_go_to_point_(False)
        resp = srv_client_wall_follower_(True)
    if state_ == 2:
        global ui_
        ui_=5
        resp = srv_client_go_to_point_(False)
        resp = srv_client_wall_follower_(False)
        twist_msg = Twist()
        twist_msg.linear.x = 0
        twist_msg.angular.z = 0
        pub.publish(twist_msg)

def normalize_angle(angle):
    if(math.fabs(angle) > math.pi):
        angle = angle - (2 * math.pi * angle) / (math.fabs(angle))
    return angle

def handle_user_input(req):
    resp=userinputResponse()
    change_state(2)
    #print(req.user_input)
    global ui_
    ui_=req.user_input
    return resp

def main():
    global regions_, position_, desired_position_, state_, yaw_, yaw_error_allowed_
    global srv_client_go_to_point_, srv_client_wall_follower_,srv_client_generate_random_point_,pub
    global srv_user_input_
    global time_start
    global minimum_distance
    rospy.init_node('bug0')
    
    sub_laser = rospy.Subscriber('/scan', LaserScan, clbk_laser)
    sub_odom = rospy.Subscriber('/odom', Odometry, clbk_odom)
    
    srv_client_go_to_point_ = rospy.ServiceProxy('/go_to_point_switch', SetBool)
    srv_client_wall_follower_ = rospy.ServiceProxy('/wall_follower_switch', SetBool)
    srv_client_generate_random_point_=rospy.ServiceProxy('generate_random_point', SetBool)
    
    srv_user_input_=rospy.Service('user_input_cmd', userinput, handle_user_input)
    
    pub = rospy.Publisher('/cmd_vel', Twist, queue_size=1)
    
    change_state(2)
    
    rate = rospy.Rate(20)
    while not rospy.is_shutdown():
        if state_ ==2:
            twist_msg = Twist()
            if ui_ == 1:
                twist_msg.linear.x = 0.5
            if ui_ == 2:
                twist_msg.linear.x = -0.5      
            if ui_ == 3:
                twist_msg.angular.z = 0.5
            if ui_ == 4:
                twist_msg.angular.z = -0.5  
            if ui_ == 5:
                twist_msg.linear.x = 0    
                twist_msg.angular.z = 0 
            if ui_ == 6:
                twist_msg.linear.x = 0    
                twist_msg.angular.z = 0  
                resp = srv_client_generate_random_point_(True)
                print('Moving To Random Point')
                time_start=time.time()
                change_state(0)
                continue                                       
            pub.publish(twist_msg)
            continue
        if regions_ == None:
            continue
        
        if state_ == 0:
            if regions_['front'] <0.2:
                change_state(1)
        
        elif state_ == 1:
            desired_yaw = math.atan2(desired_position_.y - position_.y, desired_position_.x - position_.x)
            err_yaw = normalize_angle(desired_yaw - yaw_)
            
            if math.fabs(err_yaw) < (math.pi / 6) and regions_['front'] > 1:
                change_state(0)
            
        if  state_ == 0 or state_ == 1:
            time_end=time.time()
            interval=time_end-time_start
            desired_position_.x = rospy.get_param('des_pos_x')
            desired_position_.y = rospy.get_param('des_pos_y')
            err_distantce_=math.sqrt(pow(rospy.get_param('des_pos_x') - position_.x,2)+pow(rospy.get_param('des_pos_y') - position_.y,2))            
            if interval>180:
                if err_distantce_>0.3:
                    print('Cannot Reach Target')
                    change_state(2)
        rate.sleep()

if __name__ == "__main__":
    main()
