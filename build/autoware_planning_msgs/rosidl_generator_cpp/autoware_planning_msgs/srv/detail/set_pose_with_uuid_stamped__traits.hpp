// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:srv/SetPoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_planning_msgs/srv/detail/set_pose_with_uuid_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__traits.hpp"

namespace autoware_planning_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPoseWithUuidStamped_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPoseWithUuidStamped_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPoseWithUuidStamped_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autoware_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_planning_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_planning_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_planning_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request & msg)
{
  return autoware_planning_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>()
{
  return "autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request";
}

template<>
inline const char * name<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>()
{
  return "autoware_planning_msgs/srv/SetPoseWithUuidStamped_Request";
}

template<>
struct has_fixed_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>
  : std::integral_constant<bool, has_fixed_size<autoware_planning_msgs::msg::PoseWithUuidStamped>::value> {};

template<>
struct has_bounded_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>
  : std::integral_constant<bool, has_bounded_size<autoware_planning_msgs::msg::PoseWithUuidStamped>::value> {};

template<>
struct is_message<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__traits.hpp"

namespace autoware_planning_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPoseWithUuidStamped_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPoseWithUuidStamped_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPoseWithUuidStamped_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autoware_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_planning_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_planning_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_planning_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response & msg)
{
  return autoware_planning_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>()
{
  return "autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response";
}

template<>
inline const char * name<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>()
{
  return "autoware_planning_msgs/srv/SetPoseWithUuidStamped_Response";
}

template<>
struct has_fixed_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_planning_msgs::srv::SetPoseWithUuidStamped>()
{
  return "autoware_planning_msgs::srv::SetPoseWithUuidStamped";
}

template<>
inline const char * name<autoware_planning_msgs::srv::SetPoseWithUuidStamped>()
{
  return "autoware_planning_msgs/srv/SetPoseWithUuidStamped";
}

template<>
struct has_fixed_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>::value &&
    has_fixed_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>::value &&
    has_bounded_size<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>::value
  >
{
};

template<>
struct is_service<autoware_planning_msgs::srv::SetPoseWithUuidStamped>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__TRAITS_HPP_
