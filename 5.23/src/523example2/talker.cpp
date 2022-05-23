#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{

  //the name of node
  ros::init(argc, argv, "talker");
  ros::NodeHandle nh;
  //the name of topic
  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);
  //the rate of send
  ros::Rate loop_rate(10);
  while (ros::ok())
  {
    //the type of message
    std_msgs::String msg;
    msg.data = "hello world";
    //publish the message by the topic of chatter
    chatter_pub.publish(msg);
    //
    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
//上述周期性发布信息成功 铜鼓，是因为在ROS节点中默默的个会维护一个全局回调队列，通过ros::getGlobalCallbackQuenue()
