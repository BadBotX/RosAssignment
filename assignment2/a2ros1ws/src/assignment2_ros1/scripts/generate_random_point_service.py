#! /usr/bin/env python

import rospy
import random
from std_srvs.srv import *
from assignment2_ros1.srv import *

def handle_generate_random_point(req):
    global active_
    active_=req.gp_call
    resp=GeneratePointResponse()
    if active_:
        resp.x=random.uniform(-8,8)
        resp.y=random.uniform(-8,8)
        print('Go to position x: ', resp.x ,'y: ', resp.y)
    return resp
        
    
def start_generate_random_point_server():
    rospy.init_node('generate_random_point_server')
    srv = rospy.Service('generate_random_point', GeneratePoint, handle_generate_random_point)
    rospy.spin()
    
def main():
    start_generate_random_point_server()

if __name__ == '__main__':
    main()
