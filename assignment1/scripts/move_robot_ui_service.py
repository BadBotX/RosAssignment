#! /usr/bin/env python

# import ros stuff
import rospy
from pynput import keyboard
from std_srvs.srv import *
from assignment1.srv import *

srv_client_ui_ = None
req=userinputRequest()
trigged=False
ui_=None

def on_press(key):
    global ui_
    ui_=0
    global trigged
    trigged=True
    if key == keyboard.Key.esc:
        return False
    elif key.char=='w':
        ui_=1;
    elif key.char=='s':
        ui_=2;
    elif key.char=='a':
        ui_=3;
    elif key.char=='d':
        ui_=4;
    elif key.char=='x':
        ui_=5;
    elif key.char=='r':
        ui_=6;
    else:
        pass        
    
def main():
    rospy.init_node('move_robot_ui_client')
    srv=rospy.wait_for_service('user_input_cmd')
    srv_client_ui_ = rospy.ServiceProxy('user_input_cmd', userinput)
    rate = rospy.Rate(20)
    listener = keyboard.Listener(on_press=on_press)
    listener.start()
    print('Press W for moving forward, S for moving backward, A for turning left, D for turning right, X for stop, R for moving to random point')
    while not rospy.is_shutdown():
        global trigged
        if trigged:
            req=userinputRequest()
            req.user_input=ui_
            resp=srv_client_ui_(req)
        trigged=False
        rate.sleep()

if __name__ == '__main__':
    main()
