#include "rclcpp/rclcpp.hpp"
#include "hello_yaml/hello_yaml.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    rclcpp::spin(
        std::make_shared<HelloYamlNode>()
    );

    rclcpp::shutdown();

    return 0;
}