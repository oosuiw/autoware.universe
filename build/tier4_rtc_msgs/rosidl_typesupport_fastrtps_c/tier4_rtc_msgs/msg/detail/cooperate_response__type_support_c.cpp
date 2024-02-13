// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_response__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tier4_rtc_msgs/msg/detail/module__functions.h"  // module
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // uuid

// forward declare type support functions
size_t get_serialized_size_tier4_rtc_msgs__msg__Module(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_rtc_msgs__msg__Module(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CooperateResponse__ros_msg_type = tier4_rtc_msgs__msg__CooperateResponse;

static bool _CooperateResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CooperateResponse__ros_msg_type * ros_message = static_cast<const _CooperateResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: uuid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->uuid, cdr))
    {
      return false;
    }
  }

  // Field name: module
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->module, cdr))
    {
      return false;
    }
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _CooperateResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CooperateResponse__ros_msg_type * ros_message = static_cast<_CooperateResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: uuid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->uuid))
    {
      return false;
    }
  }

  // Field name: module
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->module))
    {
      return false;
    }
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t get_serialized_size_tier4_rtc_msgs__msg__CooperateResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CooperateResponse__ros_msg_type * ros_message = static_cast<const _CooperateResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name uuid

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->uuid), current_alignment);
  // field.name module

  current_alignment += get_serialized_size_tier4_rtc_msgs__msg__Module(
    &(ros_message->module), current_alignment);
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CooperateResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_rtc_msgs__msg__CooperateResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t max_serialized_size_tier4_rtc_msgs__msg__CooperateResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: uuid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: module
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tier4_rtc_msgs__msg__Module(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CooperateResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_rtc_msgs__msg__CooperateResponse(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CooperateResponse = {
  "tier4_rtc_msgs::msg",
  "CooperateResponse",
  _CooperateResponse__cdr_serialize,
  _CooperateResponse__cdr_deserialize,
  _CooperateResponse__get_serialized_size,
  _CooperateResponse__max_serialized_size
};

static rosidl_message_type_support_t _CooperateResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CooperateResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateResponse)() {
  return &_CooperateResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
