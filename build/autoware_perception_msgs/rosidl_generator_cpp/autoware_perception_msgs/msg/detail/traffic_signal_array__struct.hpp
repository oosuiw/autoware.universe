// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__STRUCT_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'signals'
#include "autoware_perception_msgs/msg/detail/traffic_signal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_perception_msgs__msg__TrafficSignalArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_perception_msgs__msg__TrafficSignalArray __declspec(deprecated)
#endif

namespace autoware_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignalArray_
{
  using Type = TrafficSignalArray_<ContainerAllocator>;

  explicit TrafficSignalArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit TrafficSignalArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _signals_type =
    std::vector<autoware_perception_msgs::msg::TrafficSignal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>>;
  _signals_type signals;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__signals(
    const std::vector<autoware_perception_msgs::msg::TrafficSignal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>> & _arg)
  {
    this->signals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_perception_msgs__msg__TrafficSignalArray
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_perception_msgs__msg__TrafficSignalArray
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignalArray_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->signals != other.signals) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignalArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignalArray_

// alias to use template instance with default allocator
using TrafficSignalArray =
  autoware_perception_msgs::msg::TrafficSignalArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__STRUCT_HPP_
