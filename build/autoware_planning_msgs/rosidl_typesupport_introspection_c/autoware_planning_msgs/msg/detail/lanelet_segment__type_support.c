// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_planning_msgs/msg/detail/lanelet_segment__rosidl_typesupport_introspection_c.h"
#include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_planning_msgs/msg/detail/lanelet_segment__functions.h"
#include "autoware_planning_msgs/msg/detail/lanelet_segment__struct.h"


// Include directives for member types
// Member `preferred_primitive`
// Member `primitives`
#include "autoware_planning_msgs/msg/lanelet_primitive.h"
// Member `preferred_primitive`
// Member `primitives`
#include "autoware_planning_msgs/msg/detail/lanelet_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_planning_msgs__msg__LaneletSegment__init(message_memory);
}

void autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_fini_function(void * message_memory)
{
  autoware_planning_msgs__msg__LaneletSegment__fini(message_memory);
}

size_t autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__size_function__LaneletSegment__primitives(
  const void * untyped_member)
{
  const autoware_planning_msgs__msg__LaneletPrimitive__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__primitives(
  const void * untyped_member, size_t index)
{
  const autoware_planning_msgs__msg__LaneletPrimitive__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__get_function__LaneletSegment__primitives(
  void * untyped_member, size_t index)
{
  autoware_planning_msgs__msg__LaneletPrimitive__Sequence * member =
    (autoware_planning_msgs__msg__LaneletPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__fetch_function__LaneletSegment__primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_planning_msgs__msg__LaneletPrimitive * item =
    ((const autoware_planning_msgs__msg__LaneletPrimitive *)
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__primitives(untyped_member, index));
  autoware_planning_msgs__msg__LaneletPrimitive * value =
    (autoware_planning_msgs__msg__LaneletPrimitive *)(untyped_value);
  *value = *item;
}

void autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__assign_function__LaneletSegment__primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_planning_msgs__msg__LaneletPrimitive * item =
    ((autoware_planning_msgs__msg__LaneletPrimitive *)
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__get_function__LaneletSegment__primitives(untyped_member, index));
  const autoware_planning_msgs__msg__LaneletPrimitive * value =
    (const autoware_planning_msgs__msg__LaneletPrimitive *)(untyped_value);
  *item = *value;
}

bool autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__resize_function__LaneletSegment__primitives(
  void * untyped_member, size_t size)
{
  autoware_planning_msgs__msg__LaneletPrimitive__Sequence * member =
    (autoware_planning_msgs__msg__LaneletPrimitive__Sequence *)(untyped_member);
  autoware_planning_msgs__msg__LaneletPrimitive__Sequence__fini(member);
  return autoware_planning_msgs__msg__LaneletPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_member_array[2] = {
  {
    "preferred_primitive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletSegment, preferred_primitive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletSegment, primitives),  // bytes offset in struct
    NULL,  // default value
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__size_function__LaneletSegment__primitives,  // size() function pointer
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__primitives,  // get_const(index) function pointer
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__get_function__LaneletSegment__primitives,  // get(index) function pointer
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__fetch_function__LaneletSegment__primitives,  // fetch(index, &value) function pointer
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__assign_function__LaneletSegment__primitives,  // assign(index, value) function pointer
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__resize_function__LaneletSegment__primitives  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_members = {
  "autoware_planning_msgs__msg",  // message namespace
  "LaneletSegment",  // message name
  2,  // number of fields
  sizeof(autoware_planning_msgs__msg__LaneletSegment),
  autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_member_array,  // message members
  autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_type_support_handle = {
  0,
  &autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletSegment)() {
  autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletPrimitive)();
  autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletPrimitive)();
  if (!autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_type_support_handle.typesupport_identifier) {
    autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_planning_msgs__msg__LaneletSegment__rosidl_typesupport_introspection_c__LaneletSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
