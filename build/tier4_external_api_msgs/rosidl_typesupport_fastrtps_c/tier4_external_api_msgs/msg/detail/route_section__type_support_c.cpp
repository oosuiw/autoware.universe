// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/route_section__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_external_api_msgs/msg/detail/route_section__struct.h"
#include "tier4_external_api_msgs/msg/detail/route_section__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // continued_lane_ids, lane_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // continued_lane_ids, lane_ids

// forward declare type support functions


using _RouteSection__ros_msg_type = tier4_external_api_msgs__msg__RouteSection;

static bool _RouteSection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RouteSection__ros_msg_type * ros_message = static_cast<const _RouteSection__ros_msg_type *>(untyped_ros_message);
  // Field name: preferred_lane_id
  {
    cdr << ros_message->preferred_lane_id;
  }

  // Field name: lane_ids
  {
    size_t size = ros_message->lane_ids.size;
    auto array_ptr = ros_message->lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: continued_lane_ids
  {
    size_t size = ros_message->continued_lane_ids.size;
    auto array_ptr = ros_message->continued_lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RouteSection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RouteSection__ros_msg_type * ros_message = static_cast<_RouteSection__ros_msg_type *>(untyped_ros_message);
  // Field name: preferred_lane_id
  {
    cdr >> ros_message->preferred_lane_id;
  }

  // Field name: lane_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->lane_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->lane_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: continued_lane_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->continued_lane_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->continued_lane_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->continued_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'continued_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->continued_lane_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t get_serialized_size_tier4_external_api_msgs__msg__RouteSection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RouteSection__ros_msg_type * ros_message = static_cast<const _RouteSection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name preferred_lane_id
  {
    size_t item_size = sizeof(ros_message->preferred_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_ids
  {
    size_t array_size = ros_message->lane_ids.size;
    auto array_ptr = ros_message->lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name continued_lane_ids
  {
    size_t array_size = ros_message->continued_lane_ids.size;
    auto array_ptr = ros_message->continued_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RouteSection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_external_api_msgs__msg__RouteSection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t max_serialized_size_tier4_external_api_msgs__msg__RouteSection(
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

  // member: preferred_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lane_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: continued_lane_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RouteSection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_external_api_msgs__msg__RouteSection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RouteSection = {
  "tier4_external_api_msgs::msg",
  "RouteSection",
  _RouteSection__cdr_serialize,
  _RouteSection__cdr_deserialize,
  _RouteSection__get_serialized_size,
  _RouteSection__max_serialized_size
};

static rosidl_message_type_support_t _RouteSection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RouteSection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, RouteSection)() {
  return &_RouteSection__type_support;
}

#if defined(__cplusplus)
}
#endif
