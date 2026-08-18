// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hello_ros:msg/RobotPoseMsg.idl
// generated code does not contain a copyright notice

#ifndef HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__BUILDER_HPP_
#define HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hello_ros/msg/detail/robot_pose_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hello_ros
{

namespace msg
{

namespace builder
{

class Init_RobotPoseMsg_angles
{
public:
  explicit Init_RobotPoseMsg_angles(::hello_ros::msg::RobotPoseMsg & msg)
  : msg_(msg)
  {}
  ::hello_ros::msg::RobotPoseMsg angles(::hello_ros::msg::RobotPoseMsg::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hello_ros::msg::RobotPoseMsg msg_;
};

class Init_RobotPoseMsg_z
{
public:
  explicit Init_RobotPoseMsg_z(::hello_ros::msg::RobotPoseMsg & msg)
  : msg_(msg)
  {}
  Init_RobotPoseMsg_angles z(::hello_ros::msg::RobotPoseMsg::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RobotPoseMsg_angles(msg_);
  }

private:
  ::hello_ros::msg::RobotPoseMsg msg_;
};

class Init_RobotPoseMsg_y
{
public:
  explicit Init_RobotPoseMsg_y(::hello_ros::msg::RobotPoseMsg & msg)
  : msg_(msg)
  {}
  Init_RobotPoseMsg_z y(::hello_ros::msg::RobotPoseMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotPoseMsg_z(msg_);
  }

private:
  ::hello_ros::msg::RobotPoseMsg msg_;
};

class Init_RobotPoseMsg_x
{
public:
  Init_RobotPoseMsg_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPoseMsg_y x(::hello_ros::msg::RobotPoseMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotPoseMsg_y(msg_);
  }

private:
  ::hello_ros::msg::RobotPoseMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hello_ros::msg::RobotPoseMsg>()
{
  return hello_ros::msg::builder::Init_RobotPoseMsg_x();
}

}  // namespace hello_ros

#endif  // HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__BUILDER_HPP_
