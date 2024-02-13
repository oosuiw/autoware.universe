// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_planning_msgs:srv/SetPoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__STRUCT_H_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__struct.h"

/// Struct defined in srv/SetPoseWithUuidStamped in the package autoware_planning_msgs.
typedef struct autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request
{
  autoware_planning_msgs__msg__PoseWithUuidStamped data;
} autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request;

// Struct for a sequence of autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request.
typedef struct autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request__Sequence
{
  autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetPoseWithUuidStamped in the package autoware_planning_msgs.
typedef struct autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response
{
  autoware_common_msgs__msg__ResponseStatus status;
} autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response;

// Struct for a sequence of autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response.
typedef struct autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response__Sequence
{
  autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__STRUCT_H_
