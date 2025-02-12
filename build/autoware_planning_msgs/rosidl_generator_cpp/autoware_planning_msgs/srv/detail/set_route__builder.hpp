// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_planning_msgs/srv/detail/set_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRoute_Request_segments
{
public:
  explicit Init_SetRoute_Request_segments(::autoware_planning_msgs::srv::SetRoute_Request & msg)
  : msg_(msg)
  {}
  ::autoware_planning_msgs::srv::SetRoute_Request segments(::autoware_planning_msgs::srv::SetRoute_Request::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::srv::SetRoute_Request msg_;
};

class Init_SetRoute_Request_goal
{
public:
  explicit Init_SetRoute_Request_goal(::autoware_planning_msgs::srv::SetRoute_Request & msg)
  : msg_(msg)
  {}
  Init_SetRoute_Request_segments goal(::autoware_planning_msgs::srv::SetRoute_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_SetRoute_Request_segments(msg_);
  }

private:
  ::autoware_planning_msgs::srv::SetRoute_Request msg_;
};

class Init_SetRoute_Request_header
{
public:
  Init_SetRoute_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRoute_Request_goal header(::autoware_planning_msgs::srv::SetRoute_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetRoute_Request_goal(msg_);
  }

private:
  ::autoware_planning_msgs::srv::SetRoute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::srv::SetRoute_Request>()
{
  return autoware_planning_msgs::srv::builder::Init_SetRoute_Request_header();
}

}  // namespace autoware_planning_msgs


namespace autoware_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRoute_Response_status
{
public:
  Init_SetRoute_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_planning_msgs::srv::SetRoute_Response status(::autoware_planning_msgs::srv::SetRoute_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::srv::SetRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::srv::SetRoute_Response>()
{
  return autoware_planning_msgs::srv::builder::Init_SetRoute_Response_status();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__BUILDER_HPP_
