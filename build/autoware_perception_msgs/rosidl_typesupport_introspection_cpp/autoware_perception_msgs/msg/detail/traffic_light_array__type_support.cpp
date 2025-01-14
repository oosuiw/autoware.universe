// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_perception_msgs:msg/TrafficLightArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_perception_msgs/msg/detail/traffic_light_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrafficLightArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_perception_msgs::msg::TrafficLightArray(_init);
}

void TrafficLightArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_perception_msgs::msg::TrafficLightArray *>(message_memory);
  typed_message->~TrafficLightArray();
}

size_t size_function__TrafficLightArray__lights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_perception_msgs::msg::TrafficLight> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrafficLightArray__lights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_perception_msgs::msg::TrafficLight> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficLightArray__lights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_perception_msgs::msg::TrafficLight> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficLightArray__lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_perception_msgs::msg::TrafficLight *>(
    get_const_function__TrafficLightArray__lights(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_perception_msgs::msg::TrafficLight *>(untyped_value);
  value = item;
}

void assign_function__TrafficLightArray__lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_perception_msgs::msg::TrafficLight *>(
    get_function__TrafficLightArray__lights(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_perception_msgs::msg::TrafficLight *>(untyped_value);
  item = value;
}

void resize_function__TrafficLightArray__lights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_perception_msgs::msg::TrafficLight> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficLightArray_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs::msg::TrafficLightArray, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_perception_msgs::msg::TrafficLight>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs::msg::TrafficLightArray, lights),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficLightArray__lights,  // size() function pointer
    get_const_function__TrafficLightArray__lights,  // get_const(index) function pointer
    get_function__TrafficLightArray__lights,  // get(index) function pointer
    fetch_function__TrafficLightArray__lights,  // fetch(index, &value) function pointer
    assign_function__TrafficLightArray__lights,  // assign(index, value) function pointer
    resize_function__TrafficLightArray__lights  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficLightArray_message_members = {
  "autoware_perception_msgs::msg",  // message namespace
  "TrafficLightArray",  // message name
  2,  // number of fields
  sizeof(autoware_perception_msgs::msg::TrafficLightArray),
  TrafficLightArray_message_member_array,  // message members
  TrafficLightArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficLightArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficLightArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficLightArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_perception_msgs::msg::TrafficLightArray>()
{
  return &::autoware_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficLightArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_perception_msgs, msg, TrafficLightArray)() {
  return &::autoware_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficLightArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
