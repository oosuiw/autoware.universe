// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_perception_msgs/msg/detail/traffic_signal_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'signals'
#include "autoware_perception_msgs/msg/detail/traffic_signal__traits.hpp"

namespace autoware_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignalArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: signals
  {
    if (msg.signals.size() == 0) {
      out << "signals: []";
    } else {
      out << "signals: [";
      size_t pending_items = msg.signals.size();
      for (auto item : msg.signals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignalArray & msg,
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

  // member: signals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.signals.size() == 0) {
      out << "signals: []\n";
    } else {
      out << "signals:\n";
      for (auto item : msg.signals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignalArray & msg, bool use_flow_style = false)
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

}  // namespace autoware_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_perception_msgs::msg::TrafficSignalArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_perception_msgs::msg::TrafficSignalArray & msg)
{
  return autoware_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_perception_msgs::msg::TrafficSignalArray>()
{
  return "autoware_perception_msgs::msg::TrafficSignalArray";
}

template<>
inline const char * name<autoware_perception_msgs::msg::TrafficSignalArray>()
{
  return "autoware_perception_msgs/msg/TrafficSignalArray";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::TrafficSignalArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::TrafficSignalArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_perception_msgs::msg::TrafficSignalArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__TRAITS_HPP_
