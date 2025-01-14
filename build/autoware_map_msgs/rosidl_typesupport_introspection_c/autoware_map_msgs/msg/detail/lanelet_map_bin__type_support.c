// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_map_msgs/msg/detail/lanelet_map_bin__rosidl_typesupport_introspection_c.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_map_msgs/msg/detail/lanelet_map_bin__functions.h"
#include "autoware_map_msgs/msg/detail/lanelet_map_bin__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `version_map_format`
// Member `version_map`
// Member `name_map`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_map_msgs__msg__LaneletMapBin__init(message_memory);
}

void autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_fini_function(void * message_memory)
{
  autoware_map_msgs__msg__LaneletMapBin__fini(message_memory);
}

size_t autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__size_function__LaneletMapBin__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__get_const_function__LaneletMapBin__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__get_function__LaneletMapBin__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__fetch_function__LaneletMapBin__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__get_const_function__LaneletMapBin__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__assign_function__LaneletMapBin__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__get_function__LaneletMapBin__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__resize_function__LaneletMapBin__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__LaneletMapBin, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_map_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__LaneletMapBin, version_map_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__LaneletMapBin, version_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__LaneletMapBin, name_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__LaneletMapBin, data),  // bytes offset in struct
    NULL,  // default value
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__size_function__LaneletMapBin__data,  // size() function pointer
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__get_const_function__LaneletMapBin__data,  // get_const(index) function pointer
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__get_function__LaneletMapBin__data,  // get(index) function pointer
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__fetch_function__LaneletMapBin__data,  // fetch(index, &value) function pointer
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__assign_function__LaneletMapBin__data,  // assign(index, value) function pointer
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__resize_function__LaneletMapBin__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_members = {
  "autoware_map_msgs__msg",  // message namespace
  "LaneletMapBin",  // message name
  5,  // number of fields
  sizeof(autoware_map_msgs__msg__LaneletMapBin),
  autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_member_array,  // message members
  autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_type_support_handle = {
  0,
  &autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, LaneletMapBin)() {
  autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_type_support_handle.typesupport_identifier) {
    autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_map_msgs__msg__LaneletMapBin__rosidl_typesupport_introspection_c__LaneletMapBin_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
