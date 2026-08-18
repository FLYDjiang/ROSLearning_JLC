// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hello_ros:msg/RobotPoseMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hello_ros/msg/detail/robot_pose_msg__rosidl_typesupport_introspection_c.h"
#include "hello_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hello_ros/msg/detail/robot_pose_msg__functions.h"
#include "hello_ros/msg/detail/robot_pose_msg__struct.h"


// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hello_ros__msg__RobotPoseMsg__init(message_memory);
}

void hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_fini_function(void * message_memory)
{
  hello_ros__msg__RobotPoseMsg__fini(message_memory);
}

size_t hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__size_function__RobotPoseMsg__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__get_const_function__RobotPoseMsg__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__get_function__RobotPoseMsg__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__fetch_function__RobotPoseMsg__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__get_const_function__RobotPoseMsg__angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__assign_function__RobotPoseMsg__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__get_function__RobotPoseMsg__angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__resize_function__RobotPoseMsg__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_ros__msg__RobotPoseMsg, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_ros__msg__RobotPoseMsg, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_ros__msg__RobotPoseMsg, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_ros__msg__RobotPoseMsg, angles),  // bytes offset in struct
    NULL,  // default value
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__size_function__RobotPoseMsg__angles,  // size() function pointer
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__get_const_function__RobotPoseMsg__angles,  // get_const(index) function pointer
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__get_function__RobotPoseMsg__angles,  // get(index) function pointer
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__fetch_function__RobotPoseMsg__angles,  // fetch(index, &value) function pointer
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__assign_function__RobotPoseMsg__angles,  // assign(index, value) function pointer
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__resize_function__RobotPoseMsg__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_members = {
  "hello_ros__msg",  // message namespace
  "RobotPoseMsg",  // message name
  4,  // number of fields
  sizeof(hello_ros__msg__RobotPoseMsg),
  hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_member_array,  // message members
  hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_type_support_handle = {
  0,
  &hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hello_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_ros, msg, RobotPoseMsg)() {
  if (!hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_type_support_handle.typesupport_identifier) {
    hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hello_ros__msg__RobotPoseMsg__rosidl_typesupport_introspection_c__RobotPoseMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
