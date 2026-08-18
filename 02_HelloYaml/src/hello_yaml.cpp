#include "hello_yaml/hello_yaml.hpp"

#include <chrono>
#include <functional>

using namespace std::chrono_literals;

HelloYamlNode::HelloYamlNode()
    : Node("hello_yaml_node")
{
    this->declare_parameter<double>("x", 0.0);
    this->declare_parameter<double>("y", 0.0);
    this->declare_parameter<double>("z", 0.0);

    publisher_ =
        this->create_publisher<std_msgs::msg::Float32MultiArray>(
            "robot_position",
            10
        );

    timer_ =
        this->create_wall_timer(
            1s,
            std::bind(
                &HelloYamlNode::publish_position,
                this
            )
        );
}

void HelloYamlNode::publish_position()
{
    double x = this->get_parameter("x").as_double();
    double y = this->get_parameter("y").as_double();
    double z = this->get_parameter("z").as_double();

    std_msgs::msg::Float32MultiArray message;

    message.data = {
        static_cast<float>(x),
        static_cast<float>(y),
        static_cast<float>(z)
    };

    publisher_->publish(message);

    RCLCPP_INFO(
        this->get_logger(),
        "Publishing: x=%.2f, y=%.2f, z=%.2f",
        x,
        y,
        z
    );
}