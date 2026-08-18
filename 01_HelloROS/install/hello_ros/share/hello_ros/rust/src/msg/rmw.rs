#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "hello_ros__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hello_ros__msg__RobotPoseMsg() -> *const std::ffi::c_void;
}

#[link(name = "hello_ros__rosidl_generator_c")]
extern "C" {
    fn hello_ros__msg__RobotPoseMsg__init(msg: *mut RobotPoseMsg) -> bool;
    fn hello_ros__msg__RobotPoseMsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotPoseMsg>, size: usize) -> bool;
    fn hello_ros__msg__RobotPoseMsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotPoseMsg>);
    fn hello_ros__msg__RobotPoseMsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotPoseMsg>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotPoseMsg>) -> bool;
}

// Corresponds to hello_ros__msg__RobotPoseMsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotPoseMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angles: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for RobotPoseMsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hello_ros__msg__RobotPoseMsg__init(&mut msg as *mut _) {
        panic!("Call to hello_ros__msg__RobotPoseMsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotPoseMsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hello_ros__msg__RobotPoseMsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hello_ros__msg__RobotPoseMsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hello_ros__msg__RobotPoseMsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotPoseMsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotPoseMsg where Self: Sized {
  const TYPE_NAME: &'static str = "hello_ros/msg/RobotPoseMsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hello_ros__msg__RobotPoseMsg() }
  }
}


