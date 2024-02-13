// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:msg/PathWithLaneId.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/msg/detail/path_with_lane_id__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/msg/detail/path_with_lane_id__functions.h"
#include "autoware_auto_planning_msgs/msg/detail/path_with_lane_id__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "autoware_auto_planning_msgs/msg/path_point_with_lane_id.h"
// Member `points`
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__rosidl_typesupport_introspection_c.h"
// Member `left_bound`
// Member `right_bound`
#include "geometry_msgs/msg/point.h"
// Member `left_bound`
// Member `right_bound`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__msg__PathWithLaneId__init(message_memory);
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__msg__PathWithLaneId__fini(message_memory);
}

size_t autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__size_function__PathWithLaneId__points(
  const void * untyped_member)
{
  const autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * member =
    (const autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__points(
  const void * untyped_member, size_t index)
{
  const autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * member =
    (const autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__points(
  void * untyped_member, size_t index)
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * member =
    (autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathWithLaneId__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_auto_planning_msgs__msg__PathPointWithLaneId * item =
    ((const autoware_auto_planning_msgs__msg__PathPointWithLaneId *)
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__points(untyped_member, index));
  autoware_auto_planning_msgs__msg__PathPointWithLaneId * value =
    (autoware_auto_planning_msgs__msg__PathPointWithLaneId *)(untyped_value);
  *value = *item;
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathWithLaneId__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId * item =
    ((autoware_auto_planning_msgs__msg__PathPointWithLaneId *)
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__points(untyped_member, index));
  const autoware_auto_planning_msgs__msg__PathPointWithLaneId * value =
    (const autoware_auto_planning_msgs__msg__PathPointWithLaneId *)(untyped_value);
  *item = *value;
}

bool autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathWithLaneId__points(
  void * untyped_member, size_t size)
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence * member =
    (autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence *)(untyped_member);
  autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__fini(member);
  return autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence__init(member, size);
}

size_t autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__size_function__PathWithLaneId__left_bound(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__left_bound(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__left_bound(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathWithLaneId__left_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__left_bound(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathWithLaneId__left_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__left_bound(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathWithLaneId__left_bound(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__size_function__PathWithLaneId__right_bound(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__right_bound(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__right_bound(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathWithLaneId__right_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__right_bound(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathWithLaneId__right_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__right_bound(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathWithLaneId__right_bound(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathWithLaneId, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathWithLaneId, points),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__size_function__PathWithLaneId__points,  // size() function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__points,  // get_const(index) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__points,  // get(index) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathWithLaneId__points,  // fetch(index, &value) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathWithLaneId__points,  // assign(index, value) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathWithLaneId__points  // resize(index) function pointer
  },
  {
    "left_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathWithLaneId, left_bound),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__size_function__PathWithLaneId__left_bound,  // size() function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__left_bound,  // get_const(index) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__left_bound,  // get(index) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathWithLaneId__left_bound,  // fetch(index, &value) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathWithLaneId__left_bound,  // assign(index, value) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathWithLaneId__left_bound  // resize(index) function pointer
  },
  {
    "right_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__msg__PathWithLaneId, right_bound),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__size_function__PathWithLaneId__right_bound,  // size() function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_const_function__PathWithLaneId__right_bound,  // get_const(index) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__get_function__PathWithLaneId__right_bound,  // get(index) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__fetch_function__PathWithLaneId__right_bound,  // fetch(index, &value) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__assign_function__PathWithLaneId__right_bound,  // assign(index, value) function pointer
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__resize_function__PathWithLaneId__right_bound  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_members = {
  "autoware_auto_planning_msgs__msg",  // message namespace
  "PathWithLaneId",  // message name
  4,  // number of fields
  sizeof(autoware_auto_planning_msgs__msg__PathWithLaneId),
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_member_array,  // message members
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathWithLaneId)() {
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, PathPointWithLaneId)();
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__msg__PathWithLaneId__rosidl_typesupport_introspection_c__PathWithLaneId_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
