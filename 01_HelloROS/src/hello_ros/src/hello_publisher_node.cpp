#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "hello_ros/hello_publisher.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    auto node =
        std::make_shared<HelloPublisher>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}