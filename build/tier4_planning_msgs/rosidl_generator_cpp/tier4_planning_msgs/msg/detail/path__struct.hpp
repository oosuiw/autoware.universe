// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'points'
#include "tier4_planning_msgs/msg/detail/path_point__struct.hpp"
// Member 'drivable_area'
#include "nav_msgs/msg/detail/occupancy_grid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__Path __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__Path __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Path_
{
  using Type = Path_<ContainerAllocator>;

  explicit Path_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    drivable_area(_init)
  {
    (void)_init;
  }

  explicit Path_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    drivable_area(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _points_type =
    std::vector<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>>;
  _points_type points;
  using _drivable_area_type =
    nav_msgs::msg::OccupancyGrid_<ContainerAllocator>;
  _drivable_area_type drivable_area;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__drivable_area(
    const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->drivable_area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::Path_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::Path_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::Path_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::Path_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__Path
    std::shared_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__Path
    std::shared_ptr<tier4_planning_msgs::msg::Path_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->drivable_area != other.drivable_area) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_

// alias to use template instance with default allocator
using Path =
  tier4_planning_msgs::msg::Path_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_HPP_
