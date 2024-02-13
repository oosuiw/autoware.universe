// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__rosidl_typesupport_introspection_c.h"
#include "tier4_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__functions.h"
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_v2x_msgs__msg__VirtualTrafficLightState__init(message_memory);
}

void tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_fini_function(void * message_memory)
{
  tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightState, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightState, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "approval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightState, approval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_finalized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightState, is_finalized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_members = {
  "tier4_v2x_msgs__msg",  // message namespace
  "VirtualTrafficLightState",  // message name
  5,  // number of fields
  sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightState),
  tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_member_array,  // message members
  tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_type_support_handle = {
  0,
  &tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, VirtualTrafficLightState)() {
  tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_type_support_handle.typesupport_identifier) {
    tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_v2x_msgs__msg__VirtualTrafficLightState__rosidl_typesupport_introspection_c__VirtualTrafficLightState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
