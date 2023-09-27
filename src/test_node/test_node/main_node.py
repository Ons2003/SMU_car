import rclpy 
from rclpy.node import Node

class MyNode(Node) :
    def __init__(self) : 
        super().__init__("main_node")
        self.get_logger().info("test")
    

def main(args=None) : 
    rclpy.init(args=args) #starting ros com
    node = MyNode()
    rclpy.spin(node) #keep node active 
    rclpy.shutdown() #end of ros com

if __name__ == '_main_' : 
    main() 