// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_debug_msgs:msg/Float32MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__STRUCT_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__STRUCT_HPP_

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
// Member 'layout'
#include "tier4_debug_msgs/msg/detail/multi_array_layout__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_debug_msgs__msg__Float32MultiArrayStamped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_debug_msgs__msg__Float32MultiArrayStamped __declspec(deprecated)
#endif

namespace tier4_debug_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float32MultiArrayStamped_
{
  using Type = Float32MultiArrayStamped_<ContainerAllocator>;

  explicit Float32MultiArrayStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    layout(_init)
  {
    (void)_init;
  }

  explicit Float32MultiArrayStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    layout(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _layout_type =
    tier4_debug_msgs::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__layout(
    const tier4_debug_msgs::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_debug_msgs__msg__Float32MultiArrayStamped
    std::shared_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_debug_msgs__msg__Float32MultiArrayStamped
    std::shared_ptr<tier4_debug_msgs::msg::Float32MultiArrayStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float32MultiArrayStamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->layout != other.layout) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float32MultiArrayStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float32MultiArrayStamped_

// alias to use template instance with default allocator
using Float32MultiArrayStamped =
  tier4_debug_msgs::msg::Float32MultiArrayStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_debug_msgs

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__STRUCT_HPP_
