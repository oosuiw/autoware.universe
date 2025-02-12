// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_planning_msgs:srv/SetPoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__STRUCT_HPP_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPoseWithUuidStamped_Request_
{
  using Type = SetPoseWithUuidStamped_Request_<ContainerAllocator>;

  explicit SetPoseWithUuidStamped_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit SetPoseWithUuidStamped_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    autoware_planning_msgs::msg::PoseWithUuidStamped_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const autoware_planning_msgs::msg::PoseWithUuidStamped_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Request
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPoseWithUuidStamped_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPoseWithUuidStamped_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPoseWithUuidStamped_Request_

// alias to use template instance with default allocator
using SetPoseWithUuidStamped_Request =
  autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_planning_msgs


// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPoseWithUuidStamped_Response_
{
  using Type = SetPoseWithUuidStamped_Response_<ContainerAllocator>;

  explicit SetPoseWithUuidStamped_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit SetPoseWithUuidStamped_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__srv__SetPoseWithUuidStamped_Response
    std::shared_ptr<autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPoseWithUuidStamped_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPoseWithUuidStamped_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPoseWithUuidStamped_Response_

// alias to use template instance with default allocator
using SetPoseWithUuidStamped_Response =
  autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_planning_msgs

namespace autoware_planning_msgs
{

namespace srv
{

struct SetPoseWithUuidStamped
{
  using Request = autoware_planning_msgs::srv::SetPoseWithUuidStamped_Request;
  using Response = autoware_planning_msgs::srv::SetPoseWithUuidStamped_Response;
};

}  // namespace srv

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_POSE_WITH_UUID_STAMPED__STRUCT_HPP_
