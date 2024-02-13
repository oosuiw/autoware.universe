// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:srv/SetPoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_planning_msgs/srv/detail/set_pose_with_uuid_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPoseWithUuidStamped_Request_data
{
public:
  Init_SetPoseWithUuidStamped_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request data(::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request>()
{
  return autoware_planning_msgs::srv::builder::Init_SetPoseWithUuidStamped_Request_data();
}

}  // namespace autoware_planning_msgs


namespace autoware_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPoseWithUuidStamped_Response_status
{
public:
  Init_SetPoseWithUuidStamped_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response status(::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response>()
{
  return autoware_planning_msgs::srv::builder::Init_SetPoseWithUuidStamped_Response_status();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__BUILDER_HPP_
