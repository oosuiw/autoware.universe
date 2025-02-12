// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__STRUCT_H_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'controls'
#include "autoware_control_msgs/msg/detail/control__struct.h"

/// Struct defined in msg/ControlHorizon in the package autoware_control_msgs.
/**
  * Control messages calculated for a future horizon
  *
  * Control messages are ordered from near to far future [0 to N) with time_step_ms increments.
  *
  * First element of the array contains the control signals at the control_time of this message.
  *
  * The control_time field in each element of the controls array can be ignored.
 */
typedef struct autoware_control_msgs__msg__ControlHorizon
{
  /// Time this message was created
  builtin_interfaces__msg__Time stamp;
  /// Time when controls configuration state is expected to be achieved in
  builtin_interfaces__msg__Time control_time;
  /// Time difference between consecutive elements of the controls array in milliseconds
  float time_step_ms;
  autoware_control_msgs__msg__Control__Sequence controls;
} autoware_control_msgs__msg__ControlHorizon;

// Struct for a sequence of autoware_control_msgs__msg__ControlHorizon.
typedef struct autoware_control_msgs__msg__ControlHorizon__Sequence
{
  autoware_control_msgs__msg__ControlHorizon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_control_msgs__msg__ControlHorizon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__STRUCT_H_
