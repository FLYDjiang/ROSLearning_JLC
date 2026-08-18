// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hello_ros:msg/RobotPoseMsg.idl
// generated code does not contain a copyright notice

#ifndef HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__STRUCT_H_
#define HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotPoseMsg in the package hello_ros.
typedef struct hello_ros__msg__RobotPoseMsg
{
  float x;
  float y;
  float z;
  rosidl_runtime_c__float__Sequence angles;
} hello_ros__msg__RobotPoseMsg;

// Struct for a sequence of hello_ros__msg__RobotPoseMsg.
typedef struct hello_ros__msg__RobotPoseMsg__Sequence
{
  hello_ros__msg__RobotPoseMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_ros__msg__RobotPoseMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLO_ROS__MSG__DETAIL__ROBOT_POSE_MSG__STRUCT_H_
