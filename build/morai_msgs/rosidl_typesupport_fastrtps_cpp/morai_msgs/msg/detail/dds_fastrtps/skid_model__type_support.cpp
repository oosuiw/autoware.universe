// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/skid_model__rosidl_typesupport_fastrtps_cpp.hpp"
#include "morai_msgs/msg/detail/skid_model__struct.hpp"

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
namespace morai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const morai_msgs::msg::WheelRpm &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  morai_msgs::msg::WheelRpm &);
size_t get_serialized_size(
  const morai_msgs::msg::WheelRpm &,
  size_t current_alignment);
size_t
max_serialized_size_WheelRpm(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace morai_msgs

namespace morai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const morai_msgs::msg::WheelTorque &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  morai_msgs::msg::WheelTorque &);
size_t get_serialized_size(
  const morai_msgs::msg::WheelTorque &,
  size_t current_alignment);
size_t
max_serialized_size_WheelTorque(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace morai_msgs


namespace morai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::msg::SkidModel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rpm
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rpm,
    cdr);
  // Member: torque
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.torque,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::msg::SkidModel & ros_message)
{
  // Member: rpm
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rpm);

  // Member: torque
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.torque);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::msg::SkidModel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rpm

  current_alignment +=
    morai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rpm, current_alignment);
  // Member: torque

  current_alignment +=
    morai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.torque, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_SkidModel(
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


  // Member: rpm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelRpm(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: torque
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelTorque(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SkidModel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::SkidModel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SkidModel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<morai_msgs::msg::SkidModel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SkidModel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::SkidModel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SkidModel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SkidModel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SkidModel__callbacks = {
  "morai_msgs::msg",
  "SkidModel",
  _SkidModel__cdr_serialize,
  _SkidModel__cdr_deserialize,
  _SkidModel__get_serialized_size,
  _SkidModel__max_serialized_size
};

static rosidl_message_type_support_t _SkidModel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SkidModel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::SkidModel>()
{
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_SkidModel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, msg, SkidModel)() {
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_SkidModel__handle;
}

#ifdef __cplusplus
}
#endif