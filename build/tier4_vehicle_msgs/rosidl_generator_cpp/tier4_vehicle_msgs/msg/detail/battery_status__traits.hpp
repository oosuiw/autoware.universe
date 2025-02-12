// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_vehicle_msgs/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tier4_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: energy_level
  {
    out << "energy_level: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: energy_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_level: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryStatus & msg, bool use_flow_style = false)
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
  const tier4_vehicle_msgs::msg::BatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_vehicle_msgs::msg::BatteryStatus & msg)
{
  return tier4_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_vehicle_msgs::msg::BatteryStatus>()
{
  return "tier4_vehicle_msgs::msg::BatteryStatus";
}

template<>
inline const char * name<tier4_vehicle_msgs::msg::BatteryStatus>()
{
  return "tier4_vehicle_msgs/msg/BatteryStatus";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::msg::BatteryStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::msg::BatteryStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tier4_vehicle_msgs::msg::BatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
