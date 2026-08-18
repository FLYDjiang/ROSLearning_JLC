#pragma once

#include "rclcpp/rclcpp.hpp"
#include "hello_ros/msg/robot_pose_msg.hpp"

class HelloSubscriber : public rclcpp::Node
{
public:
    HelloSubscriber();
private:
    void robot_pose_callback(
        const hello_ros::msg::RobotPoseMsg::SharedPtr msg
    );
    rclcpp::Subscription<hello_ros::msg::RobotPoseMsg>::SharedPtr subscription_;

};
