// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/SetEmergency.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_EMERGENCY__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_EMERGENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/set_emergency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEmergency_Request_emergency
{
public:
  Init_SetEmergency_Request_emergency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::SetEmergency_Request emergency(::tier4_external_api_msgs::srv::SetEmergency_Request::_emergency_type arg)
  {
    msg_.emergency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::SetEmergency_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::SetEmergency_Request>()
{
  return tier4_external_api_msgs::srv::builder::Init_SetEmergency_Request_emergency();
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEmergency_Response_status
{
public:
  Init_SetEmergency_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::SetEmergency_Response status(::tier4_external_api_msgs::srv::SetEmergency_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::SetEmergency_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::SetEmergency_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_SetEmergency_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_EMERGENCY__BUILDER_HPP_
