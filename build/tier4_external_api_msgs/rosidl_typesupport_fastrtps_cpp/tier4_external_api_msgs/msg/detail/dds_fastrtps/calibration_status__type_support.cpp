// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/calibration_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_external_api_msgs/msg/detail/calibration_status__struct.hpp"

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

namespace tier4_external_api_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_serialize(
  const tier4_external_api_msgs::msg::CalibrationStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target
  cdr << ros_message.target;
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_external_api_msgs::msg::CalibrationStatus & ros_message)
{
  // Member: target
  cdr >> ros_message.target;

  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
get_serialized_size(
  const tier4_external_api_msgs::msg::CalibrationStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target
  {
    size_t item_size = sizeof(ros_message.target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
max_serialized_size_CalibrationStatus(
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


  // Member: target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CalibrationStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::msg::CalibrationStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CalibrationStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_external_api_msgs::msg::CalibrationStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CalibrationStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::msg::CalibrationStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CalibrationStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CalibrationStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CalibrationStatus__callbacks = {
  "tier4_external_api_msgs::msg",
  "CalibrationStatus",
  _CalibrationStatus__cdr_serialize,
  _CalibrationStatus__cdr_deserialize,
  _CalibrationStatus__get_serialized_size,
  _CalibrationStatus__max_serialized_size
};

static rosidl_message_type_support_t _CalibrationStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CalibrationStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_external_api_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::msg::CalibrationStatus>()
{
  return &tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::_CalibrationStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, msg, CalibrationStatus)() {
  return &tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::_CalibrationStatus__handle;
}

#ifdef __cplusplus
}
#endif
