#pragma once

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"

class HelloYamlNode : public rclcpp::Node
{
public:
    HelloYamlNode();

private:
    void publish_position();

    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr publisher_;

    rclcpp::TimerBase::SharedPtr timer_;
};