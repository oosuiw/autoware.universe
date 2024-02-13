// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics__UNAVAILABLE = 0
};

/// Constant 'SIGN_UNKNOWN'.
enum
{
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics__SIGN_UNKNOWN = 1
};

/// Constant 'AVAILABLE'.
enum
{
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics__AVAILABLE = 2
};

// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/DetectedObjectKinematics in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__DetectedObjectKinematics
{
  geometry_msgs__msg__PoseWithCovariance pose_with_covariance;
  bool has_position_covariance;
  uint8_t orientation_availability;
  geometry_msgs__msg__TwistWithCovariance twist_with_covariance;
  bool has_twist;
  bool has_twist_covariance;
} autoware_auto_perception_msgs__msg__DetectedObjectKinematics;

// Struct for a sequence of autoware_auto_perception_msgs__msg__DetectedObjectKinematics.
typedef struct autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence
{
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__DetectedObjectKinematics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__STRUCT_H_
