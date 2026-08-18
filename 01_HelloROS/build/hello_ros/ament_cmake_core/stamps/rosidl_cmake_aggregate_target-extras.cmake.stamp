# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target hello_ros::hello_ros
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${hello_ros_TARGETS}.
if(hello_ros_TARGETS AND NOT TARGET hello_ros::hello_ros)
  add_library(hello_ros::hello_ros INTERFACE IMPORTED)
  set_target_properties(hello_ros::hello_ros PROPERTIES
    INTERFACE_LINK_LIBRARIES "${hello_ros_TARGETS}")
endif()
