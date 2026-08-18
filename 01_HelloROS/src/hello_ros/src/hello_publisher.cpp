#include "hello_ros/hello_publisher.hpp"

#include <chrono>
#include <functional>
#include <string>

using namespace std::chrono_literals;

HelloPublisher::HelloPublisher()
    : Node("hello_publisher"),
      topic_name_("robot_pose"),
      count_(0)
{
    publisher_ =
        this->create_publisher<hello_ros::msg::RobotPoseMsg>(
            topic_name_,
            10
        );

    timer_ =
        this->create_wall_timer(
            1s,
            std::bind(
                &HelloPublisher::publish_message,
                this
            )
        );

    RCLCPP_INFO(
        this->get_logger(),
        "Hello Publisher started."
    );
}

void HelloPublisher::publish_message()
{
    hello_ros::msg::RobotPoseMsg message;

message.x = 1.0f;
message.y = 2.0f;
message.z = 3.0f;

message.angles = {10.0f, 20.0f, 30.0f};

    publisher_->publish(message);

    RCLCPP_INFO(
        this->get_logger(),
        "Publishing: x=%.2f, y=%.2f, z=%.2f",
        message.x,
        message.y,
        message.z
    );
}