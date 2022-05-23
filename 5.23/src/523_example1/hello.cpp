#include <ros/ros.h>

int main(int argc, char **argv)
{
  //初始化ROS节点，指定节点名“hello”
  ros::init(argc, argv, "hello");
  //节点句柄
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
