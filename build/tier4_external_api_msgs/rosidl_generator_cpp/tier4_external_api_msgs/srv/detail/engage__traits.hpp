// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/Engage.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__ENGAGE__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__ENGAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_external_api_msgs/srv/detail/engage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_external_api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Engage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: engage
  {
    out << "engage: ";
    rosidl_generator_traits::value_to_yaml(msg.engage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Engage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: engage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engage: ";
    rosidl_generator_traits::value_to_yaml(msg.engage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Engage_Request & msg, bool use_flow_style = false)
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

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::srv::Engage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::srv::Engage_Request & msg)
{
  return tier4_external_api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::Engage_Request>()
{
  return "tier4_external_api_msgs::srv::Engage_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::Engage_Request>()
{
  return "tier4_external_api_msgs/srv/Engage_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::Engage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::Engage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::srv::Engage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace tier4_external_api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Engage_Response & msg,
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
  const Engage_Response & msg,
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

inline std::string to_yaml(const Engage_Response & msg, bool use_flow_style = false)
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

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::srv::Engage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::srv::Engage_Response & msg)
{
  return tier4_external_api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::Engage_Response>()
{
  return "tier4_external_api_msgs::srv::Engage_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::Engage_Response>()
{
  return "tier4_external_api_msgs/srv/Engage_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::Engage_Response>
  : std::integral_constant<bool, has_fixed_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::Engage_Response>
  : std::integral_constant<bool, has_bounded_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_external_api_msgs::srv::Engage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::Engage>()
{
  return "tier4_external_api_msgs::srv::Engage";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::Engage>()
{
  return "tier4_external_api_msgs/srv/Engage";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::Engage>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::Engage_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::Engage_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::Engage>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::Engage_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::Engage_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::Engage>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::Engage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::Engage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__ENGAGE__TRAITS_HPP_