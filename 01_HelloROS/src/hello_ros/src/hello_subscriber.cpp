#include "hello_ros/hello_subscriber.hpp"

using std::placeholders::_1;

HelloSubscriber::HelloSubscriber()
    : Node("hello_subscriber")
{
    subscription_ =
        this->create_subscription<hello_ros::msg::RobotPoseMsg>(
            "robot_pose",
            10,
            std::bind(
                &HelloSubscriber::robot_pose_callback,
                this,
                _1));
}

void HelloSubscriber::robot_pose_callback(
    const hello_ros::msg::RobotPoseMsg::SharedPtr msg)
{
    RCLCPP_INFO(
        this->get_logger(),
        "收到机器人位置: x=%.2f, y=%.2f, z=%.2f",
        msg->x,
        msg->y,
        msg->z);
}