// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hello_ros:msg/RobotPoseMsg.idl
// generated code does not contain a copyright notice

#ifndef HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__TRAITS_HPP_
#define HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hello_ros/msg/detail/robot_pose_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hello_ros
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotPoseMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPoseMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPoseMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hello_ros

namespace rosidl_generator_traits
{

[[deprecated("use hello_ros::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hello_ros::msg::RobotPoseMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  hello_ros::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hello_ros::msg::to_yaml() instead")]]
inline std::string to_yaml(const hello_ros::msg::RobotPoseMsg & msg)
{
  return hello_ros::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hello_ros::msg::RobotPoseMsg>()
{
  return "hello_ros::msg::RobotPoseMsg";
}

template<>
inline const char * name<hello_ros::msg::RobotPoseMsg>()
{
  return "hello_ros/msg/RobotPoseMsg";
}

template<>
struct has_fixed_size<hello_ros::msg::RobotPoseMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_ros::msg::RobotPoseMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hello_ros::msg::RobotPoseMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__TRAITS_HPP_
