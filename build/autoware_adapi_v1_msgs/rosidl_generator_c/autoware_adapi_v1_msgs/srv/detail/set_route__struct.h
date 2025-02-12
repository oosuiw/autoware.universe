// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'segments'
#include "autoware_adapi_v1_msgs/msg/detail/route_segment__struct.h"

/// Struct defined in srv/SetRoute in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__SetRoute_Request
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose goal;
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence segments;
} autoware_adapi_v1_msgs__srv__SetRoute_Request;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__SetRoute_Request.
typedef struct autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence
{
  autoware_adapi_v1_msgs__srv__SetRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence;


// Constants defined in the message

/// Constant 'ERROR_ROUTE_EXISTS'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoute_Response__ERROR_ROUTE_EXISTS = 1
};

/// Constant 'ERROR_PLANNER_UNREADY'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoute_Response__ERROR_PLANNER_UNREADY = 2
};

/// Constant 'ERROR_PLANNER_FAILED'.
enum
{
  autoware_adapi_v1_msgs__srv__SetRoute_Response__ERROR_PLANNER_FAILED = 3
};

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetRoute in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__SetRoute_Response
{
  autoware_adapi_v1_msgs__msg__ResponseStatus status;
} autoware_adapi_v1_msgs__srv__SetRoute_Response;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__SetRoute_Response.
typedef struct autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence
{
  autoware_adapi_v1_msgs__srv__SetRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_H_
