// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:srv/MoraiSyncModeCtrlCmdSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CTRL_CMD_SRV__TRAITS_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CTRL_CMD_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/srv/detail/morai_sync_mode_ctrl_cmd_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__traits.hpp"

namespace morai_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoraiSyncModeCtrlCmdSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoraiSyncModeCtrlCmdSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoraiSyncModeCtrlCmdSrv_Request & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request & msg)
{
  return morai_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>()
{
  return "morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>()
{
  return "morai_msgs/srv/MoraiSyncModeCtrlCmdSrv_Request";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeCtrlCmd>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeCtrlCmd>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/sync_mode_result_response__traits.hpp"

namespace morai_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoraiSyncModeCtrlCmdSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoraiSyncModeCtrlCmdSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoraiSyncModeCtrlCmdSrv_Response & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response & msg)
{
  return morai_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>()
{
  return "morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>()
{
  return "morai_msgs/srv/MoraiSyncModeCtrlCmdSrv_Response";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeResultResponse>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeResultResponse>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>()
{
  return "morai_msgs::srv::MoraiSyncModeCtrlCmdSrv";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>()
{
  return "morai_msgs/srv/MoraiSyncModeCtrlCmdSrv";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>::value &&
    has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>::value &&
    has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>::value
  >
{
};

template<>
struct is_service<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>
  : std::true_type
{
};

template<>
struct is_service_request<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CTRL_CMD_SRV__TRAITS_HPP_