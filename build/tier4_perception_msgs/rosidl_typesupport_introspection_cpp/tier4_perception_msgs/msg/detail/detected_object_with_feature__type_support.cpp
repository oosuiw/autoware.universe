// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectedObjectWithFeature_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_perception_msgs::msg::DetectedObjectWithFeature(_init);
}

void DetectedObjectWithFeature_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_perception_msgs::msg::DetectedObjectWithFeature *>(message_memory);
  typed_message->~DetectedObjectWithFeature();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectedObjectWithFeature_message_member_array[2] = {
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_perception_msgs::msg::DetectedObject>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs::msg::DetectedObjectWithFeature, object),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_perception_msgs::msg::Feature>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs::msg::DetectedObjectWithFeature, feature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectedObjectWithFeature_message_members = {
  "tier4_perception_msgs::msg",  // message namespace
  "DetectedObjectWithFeature",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs::msg::DetectedObjectWithFeature),
  DetectedObjectWithFeature_message_member_array,  // message members
  DetectedObjectWithFeature_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjectWithFeature_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectedObjectWithFeature_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectedObjectWithFeature_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_perception_msgs::msg::DetectedObjectWithFeature>()
{
  return &::tier4_perception_msgs::msg::rosidl_typesupport_introspection_cpp::DetectedObjectWithFeature_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_perception_msgs, msg, DetectedObjectWithFeature)() {
  return &::tier4_perception_msgs::msg::rosidl_typesupport_introspection_cpp::DetectedObjectWithFeature_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
