#!/usr/bin/env python

from assignment2_srv.srv import GeneratePoint
import rclpy
from rclpy.node import Node
import random

class RandomPointService(Node):

    def __init__(self):
        super().__init__('generate_random_point_server')
        self.srv = self.create_service(GeneratePoint, 'generate_random_point', self.grp_callback)
        print('Initialization Completed')


    def grp_callback(self, request, response):
        response.x = random.uniform(-8, 8)
        response.y = random.uniform(-8, 8)
        print('x:', response.x)
        print('y:', response.y)
        return response

def main(args=None):

    rclpy.init(args=args)

    node_service = RandomPointService()

    rclpy.spin(node_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
