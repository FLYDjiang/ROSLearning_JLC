#include "rclcpp/rclcpp.hpp"
#include "hello_ros/hello_subscriber.hpp"

int main(int argc,char **argv)
{

    rclcpp::init(argc, argv);

    rclcpp::spin(
        std::make_shared<HelloSubscriber>()
    );

    rclcpp::shutdown();

    return 0;
}