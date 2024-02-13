// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_vehicle_msgs/msg/detail/actuation_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "tier4_vehicle_msgs/msg/detail/actuation_status__traits.hpp"

namespace tier4_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuationStatusStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuationStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuationStatusStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tier4_vehicle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_vehicle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_vehicle_msgs::msg::ActuationStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_vehicle_msgs::msg::ActuationStatusStamped & msg)
{
  return tier4_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_vehicle_msgs::msg::ActuationStatusStamped>()
{
  return "tier4_vehicle_msgs::msg::ActuationStatusStamped";
}

template<>
inline const char * name<tier4_vehicle_msgs::msg::ActuationStatusStamped>()
{
  return "tier4_vehicle_msgs/msg/ActuationStatusStamped";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::msg::ActuationStatusStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<tier4_vehicle_msgs::msg::ActuationStatus>::value> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::msg::ActuationStatusStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<tier4_vehicle_msgs::msg::ActuationStatus>::value> {};

template<>
struct is_message<tier4_vehicle_msgs::msg::ActuationStatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__TRAITS_HPP_
