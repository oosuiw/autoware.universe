// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/DynamicObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/dynamic_object_array__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/dynamic_object_array__functions.h"
#include "tier4_perception_msgs/msg/detail/dynamic_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "tier4_perception_msgs/msg/dynamic_object.h"
// Member `objects`
#include "tier4_perception_msgs/msg/detail/dynamic_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__DynamicObjectArray__init(message_memory);
}

void tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__DynamicObjectArray__fini(message_memory);
}

size_t tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__size_function__DynamicObjectArray__objects(
  const void * untyped_member)
{
  const tier4_perception_msgs__msg__DynamicObject__Sequence * member =
    (const tier4_perception_msgs__msg__DynamicObject__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__get_const_function__DynamicObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const tier4_perception_msgs__msg__DynamicObject__Sequence * member =
    (const tier4_perception_msgs__msg__DynamicObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__get_function__DynamicObjectArray__objects(
  void * untyped_member, size_t index)
{
  tier4_perception_msgs__msg__DynamicObject__Sequence * member =
    (tier4_perception_msgs__msg__DynamicObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__fetch_function__DynamicObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_perception_msgs__msg__DynamicObject * item =
    ((const tier4_perception_msgs__msg__DynamicObject *)
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__get_const_function__DynamicObjectArray__objects(untyped_member, index));
  tier4_perception_msgs__msg__DynamicObject * value =
    (tier4_perception_msgs__msg__DynamicObject *)(untyped_value);
  *value = *item;
}

void tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__assign_function__DynamicObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_perception_msgs__msg__DynamicObject * item =
    ((tier4_perception_msgs__msg__DynamicObject *)
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__get_function__DynamicObjectArray__objects(untyped_member, index));
  const tier4_perception_msgs__msg__DynamicObject * value =
    (const tier4_perception_msgs__msg__DynamicObject *)(untyped_value);
  *item = *value;
}

bool tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__resize_function__DynamicObjectArray__objects(
  void * untyped_member, size_t size)
{
  tier4_perception_msgs__msg__DynamicObject__Sequence * member =
    (tier4_perception_msgs__msg__DynamicObject__Sequence *)(untyped_member);
  tier4_perception_msgs__msg__DynamicObject__Sequence__fini(member);
  return tier4_perception_msgs__msg__DynamicObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DynamicObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DynamicObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__size_function__DynamicObjectArray__objects,  // size() function pointer
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__get_const_function__DynamicObjectArray__objects,  // get_const(index) function pointer
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__get_function__DynamicObjectArray__objects,  // get(index) function pointer
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__fetch_function__DynamicObjectArray__objects,  // fetch(index, &value) function pointer
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__assign_function__DynamicObjectArray__objects,  // assign(index, value) function pointer
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__resize_function__DynamicObjectArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "DynamicObjectArray",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs__msg__DynamicObjectArray),
  tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_member_array,  // message members
  tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_type_support_handle = {
  0,
  &tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, DynamicObjectArray)() {
  tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, DynamicObject)();
  if (!tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_type_support_handle.typesupport_identifier) {
    tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_perception_msgs__msg__DynamicObjectArray__rosidl_typesupport_introspection_c__DynamicObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
