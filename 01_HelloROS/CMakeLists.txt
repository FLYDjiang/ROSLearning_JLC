cmake_minimum_required(VERSION 3.8)

project(hello_ros)


set(CMAKE_CXX_STANDARD 17)


find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(
    ${PROJECT_NAME}
    "msg/RobotPoseMsg.msg"
)

rosidl_get_typesupport_target(
    cpp_typesupport_target
    ${PROJECT_NAME}
    "rosidl_typesupport_cpp"
)

add_library(
    hello_publisher_lib
    src/hello_publisher.cpp
)


target_include_directories(
    hello_publisher_lib
    PUBLIC
    include
)


ament_target_dependencies(
    hello_publisher_lib
    rclcpp
    std_msgs
)

target_link_libraries(
    hello_publisher_lib
    "${cpp_typesupport_target}"
)

add_executable(
    hello_publisher_node
    src/hello_publisher_node.cpp
)


target_link_libraries(
    hello_publisher_node
    hello_publisher_lib
)

ament_target_dependencies(
    hello_publisher_node
    rclcpp
    std_msgs
)

add_library(
    hello_subscriber_lib
    src/hello_subscriber.cpp
)

target_include_directories(
    hello_subscriber_lib
    PUBLIC
    include
)

ament_target_dependencies(
    hello_subscriber_lib
    rclcpp
    std_msgs
)

target_link_libraries(
    hello_subscriber_lib
    "${cpp_typesupport_target}"
)

add_executable(
    hello_subscriber_node
    src/hello_subscriber_node.cpp
)

target_link_libraries(
    hello_subscriber_node
    hello_subscriber_lib
)

ament_target_dependencies(
    hello_subscriber_node

    rclcpp
    std_msgs
)

install(
    TARGETS
    hello_publisher_lib
    hello_subscriber_lib
    hello_publisher_node
    hello_subscriber_node

    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(
    DIRECTORY
    include/
    DESTINATION
    include
)

ament_package()