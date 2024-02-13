// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectsWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_perception_msgs/msg/detail/detected_objects_with_feature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'feature_objects'
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__traits.hpp"

namespace tier4_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedObjectsWithFeature & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: feature_objects
  {
    if (msg.feature_objects.size() == 0) {
      out << "feature_objects: []";
    } else {
      out << "feature_objects: [";
      size_t pending_items = msg.feature_objects.size();
      for (auto item : msg.feature_objects) {
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
  const DetectedObjectsWithFeature & msg,
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

  // member: feature_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_objects.size() == 0) {
      out << "feature_objects: []\n";
    } else {
      out << "feature_objects:\n";
      for (auto item : msg.feature_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedObjectsWithFeature & msg, bool use_flow_style = false)
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

}  // namespace tier4_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_perception_msgs::msg::DetectedObjectsWithFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_perception_msgs::msg::DetectedObjectsWithFeature & msg)
{
  return tier4_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::DetectedObjectsWithFeature>()
{
  return "tier4_perception_msgs::msg::DetectedObjectsWithFeature";
}

template<>
inline const char * name<tier4_perception_msgs::msg::DetectedObjectsWithFeature>()
{
  return "tier4_perception_msgs/msg/DetectedObjectsWithFeature";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::DetectedObjectsWithFeature>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::DetectedObjectsWithFeature>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_perception_msgs::msg::DetectedObjectsWithFeature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__TRAITS_HPP_
