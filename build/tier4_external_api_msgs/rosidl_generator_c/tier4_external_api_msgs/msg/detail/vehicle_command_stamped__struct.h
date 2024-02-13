// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/VehicleCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND_STAMPED__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND_STAMPED__STRUCT_H_

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
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'command'
#include "tier4_external_api_msgs/msg/detail/vehicle_command__struct.h"

/// Struct defined in msg/VehicleCommandStamped in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__VehicleCommandStamped
{
  builtin_interfaces__msg__Time stamp;
  tier4_external_api_msgs__msg__VehicleCommand command;
} tier4_external_api_msgs__msg__VehicleCommandStamped;

// Struct for a sequence of tier4_external_api_msgs__msg__VehicleCommandStamped.
typedef struct tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence
{
  tier4_external_api_msgs__msg__VehicleCommandStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND_STAMPED__STRUCT_H_
