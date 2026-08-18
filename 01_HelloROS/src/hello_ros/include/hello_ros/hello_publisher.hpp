#pragma once

#include "rclcpp/rclcpp.hpp"
#include "hello_ros/msg/robot_pose_msg.hpp"


class HelloPublisher : public rclcpp::Node
{
public:
    HelloPublisher();

private:
    void publish_message();
    rclcpp::Publisher<hello_ros::msg::RobotPoseMsg>::SharedPtr publisher_;

    rclcpp::TimerBase::SharedPtr timer_;

    std::string topic_name_;

    int count_;
};
