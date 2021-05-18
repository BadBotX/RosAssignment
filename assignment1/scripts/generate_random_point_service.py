#! /usr/bin/env python

import rospy
import random
from std_srvs.srv import *

def handle_generate_random_point(req):
    global active_
    active_=req.data
    res = SetBoolResponse()
    res.success=True
    res.message='Done!'
    if active_:
        rospy.set_param('des_pos_x', random.uniform(-8,8))
        rospy.set_param('des_pos_y', random.uniform(-8,8))
        print('Go to position x: ', rospy.get_param('des_pos_x') ,'y: ', rospy.get_param('des_pos_y'))
    return res
        
    
def start_generate_random_point_server():
    rospy.init_node('generate_random_point_server')
    srv = rospy.Service('generate_random_point', SetBool, handle_generate_random_point)
    rospy.spin()
    
def main():
    start_generate_random_point_server()

if __name__ == '__main__':
    main()
