// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tier4_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_serialize(
  const tier4_planning_msgs::msg::VelocityLimitConstraints & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min_acceleration
  cdr << ros_message.min_acceleration;
  // Member: max_jerk
  cdr << ros_message.max_jerk;
  // Member: min_jerk
  cdr << ros_message.min_jerk;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_planning_msgs::msg::VelocityLimitConstraints & ros_message)
{
  // Member: min_acceleration
  cdr >> ros_message.min_acceleration;

  // Member: max_jerk
  cdr >> ros_message.max_jerk;

  // Member: min_jerk
  cdr >> ros_message.min_jerk;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
get_serialized_size(
  const tier4_planning_msgs::msg::VelocityLimitConstraints & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min_acceleration
  {
    size_t item_size = sizeof(ros_message.min_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_jerk
  {
    size_t item_size = sizeof(ros_message.max_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_jerk
  {
    size_t item_size = sizeof(ros_message.min_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
max_serialized_size_VelocityLimitConstraints(
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


  // Member: min_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VelocityLimitConstraints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::VelocityLimitConstraints *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VelocityLimitConstraints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_planning_msgs::msg::VelocityLimitConstraints *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VelocityLimitConstraints__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::VelocityLimitConstraints *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VelocityLimitConstraints__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VelocityLimitConstraints(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VelocityLimitConstraints__callbacks = {
  "tier4_planning_msgs::msg",
  "VelocityLimitConstraints",
  _VelocityLimitConstraints__cdr_serialize,
  _VelocityLimitConstraints__cdr_deserialize,
  _VelocityLimitConstraints__get_serialized_size,
  _VelocityLimitConstraints__max_serialized_size
};

static rosidl_message_type_support_t _VelocityLimitConstraints__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VelocityLimitConstraints__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_planning_msgs::msg::VelocityLimitConstraints>()
{
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_VelocityLimitConstraints__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_planning_msgs, msg, VelocityLimitConstraints)() {
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_VelocityLimitConstraints__handle;
}

#ifdef __cplusplus
}
#endif