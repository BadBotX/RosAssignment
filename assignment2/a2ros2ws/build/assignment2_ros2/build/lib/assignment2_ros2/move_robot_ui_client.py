#! /usr/bin/env python
import sys

from time import sleep
import rclpy
from rclpy.node import Node
from pynput import keyboard
from assignment2_srv.srv import UserInput

trigged=None
ui_=None

def on_press(key):
    global ui_
    ui_=0
    global trigged
    trigged=True
    if key == keyboard.Key.esc:
        return False
    elif key.char=='w':
        print('wwww')
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
        
class MRUIClientAsync(Node):

    def __init__(self):
        super().__init__('move_robot_ui_client_async')
        self.cli = self.create_client(UserInput, 'user_input_cmd')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = UserInput.Request()

    def send_request(self):
        global ui_
        self.req.user_input = ui_
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)
    mrui_client = MRUIClientAsync()
    listener = keyboard.Listener(on_press=on_press)
    listener.start()
    print('Press W for moving forward, S for moving backward, A for turning left, D for turning right, X for stop, R for moving to random point')
    while rclpy.ok():
        global trigged
        if trigged:
            mrui_client.send_request()
        trigged=False
        sleep(0.2)

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
