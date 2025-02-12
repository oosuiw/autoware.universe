// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_simulation_msgs:msg/UserDefinedValueType.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__STRUCT_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValueType __attribute__((deprecated))
#else
# define DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValueType __declspec(deprecated)
#endif

namespace tier4_simulation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserDefinedValueType_
{
  using Type = UserDefinedValueType_<ContainerAllocator>;

  explicit UserDefinedValueType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  explicit UserDefinedValueType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  // field types and members
  using _data_type =
    uint8_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const uint8_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t BOOLEAN =
    0;
  static constexpr int8_t DATE_TIME =
    1;
  static constexpr int8_t DOUBLE =
    2;
  static constexpr int8_t INTEGER =
    3;
  static constexpr int8_t STRING =
    4;
  static constexpr int8_t UNSIGNED_INT =
    5;
  static constexpr int8_t UNSIGNED_SHORT =
    6;

  // pointer types
  using RawPtr =
    tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValueType
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValueType
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserDefinedValueType_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserDefinedValueType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserDefinedValueType_

// alias to use template instance with default allocator
using UserDefinedValueType =
  tier4_simulation_msgs::msg::UserDefinedValueType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::BOOLEAN;
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::DATE_TIME;
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::DOUBLE;
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::INTEGER;
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::STRING;
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::UNSIGNED_INT;
template<typename ContainerAllocator>
constexpr int8_t UserDefinedValueType_<ContainerAllocator>::UNSIGNED_SHORT;

}  // namespace msg

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__STRUCT_HPP_
