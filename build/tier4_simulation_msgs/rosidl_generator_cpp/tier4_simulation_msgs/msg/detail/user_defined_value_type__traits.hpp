// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_simulation_msgs:msg/UserDefinedValueType.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__TRAITS_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_simulation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UserDefinedValueType & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserDefinedValueType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserDefinedValueType & msg, bool use_flow_style = false)
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

}  // namespace tier4_simulation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_simulation_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_simulation_msgs::msg::UserDefinedValueType & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_simulation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_simulation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_simulation_msgs::msg::UserDefinedValueType & msg)
{
  return tier4_simulation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_simulation_msgs::msg::UserDefinedValueType>()
{
  return "tier4_simulation_msgs::msg::UserDefinedValueType";
}

template<>
inline const char * name<tier4_simulation_msgs::msg::UserDefinedValueType>()
{
  return "tier4_simulation_msgs/msg/UserDefinedValueType";
}

template<>
struct has_fixed_size<tier4_simulation_msgs::msg::UserDefinedValueType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_simulation_msgs::msg::UserDefinedValueType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_simulation_msgs::msg::UserDefinedValueType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__TRAITS_HPP_
