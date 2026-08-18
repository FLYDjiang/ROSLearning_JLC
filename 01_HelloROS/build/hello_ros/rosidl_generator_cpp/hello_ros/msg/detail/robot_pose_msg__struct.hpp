// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hello_ros:msg/RobotPoseMsg.idl
// generated code does not contain a copyright notice

#ifndef HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__STRUCT_HPP_
#define HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hello_ros__msg__RobotPoseMsg __attribute__((deprecated))
#else
# define DEPRECATED__hello_ros__msg__RobotPoseMsg __declspec(deprecated)
#endif

namespace hello_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotPoseMsg_
{
  using Type = RobotPoseMsg_<ContainerAllocator>;

  explicit RobotPoseMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit RobotPoseMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_ros::msg::RobotPoseMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_ros::msg::RobotPoseMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_ros::msg::RobotPoseMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_ros::msg::RobotPoseMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_ros__msg__RobotPoseMsg
    std::shared_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_ros__msg__RobotPoseMsg
    std::shared_ptr<hello_ros::msg::RobotPoseMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPoseMsg_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPoseMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPoseMsg_

// alias to use template instance with default allocator
using RobotPoseMsg =
  hello_ros::msg::RobotPoseMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hello_ros

#endif  // HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__STRUCT_HPP_
