// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/SetTrafficLight.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/set_traffic_light__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace morai_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetTrafficLight_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::SetTrafficLight(_init);
}

void SetTrafficLight_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::SetTrafficLight *>(message_memory);
  typed_message->~SetTrafficLight();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetTrafficLight_message_member_array[2] = {
  {
    "traffic_light_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SetTrafficLight, traffic_light_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_light_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SetTrafficLight, traffic_light_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetTrafficLight_message_members = {
  "morai_msgs::msg",  // message namespace
  "SetTrafficLight",  // message name
  2,  // number of fields
  sizeof(morai_msgs::msg::SetTrafficLight),
  SetTrafficLight_message_member_array,  // message members
  SetTrafficLight_init_function,  // function to initialize message memory (memory has to be allocated)
  SetTrafficLight_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetTrafficLight_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetTrafficLight_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace morai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::SetTrafficLight>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::SetTrafficLight_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, SetTrafficLight)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::SetTrafficLight_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
