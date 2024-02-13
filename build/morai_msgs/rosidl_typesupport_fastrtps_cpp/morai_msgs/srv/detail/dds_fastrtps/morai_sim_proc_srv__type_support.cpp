// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:srv/MoraiSimProcSrv.idl
// generated code does not contain a copyright notice
#include "morai_msgs/srv/detail/morai_sim_proc_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "morai_msgs/srv/detail/morai_sim_proc_srv__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace morai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const morai_msgs::msg::MoraiSimProcHandle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  morai_msgs::msg::MoraiSimProcHandle &);
size_t get_serialized_size(
  const morai_msgs::msg::MoraiSimProcHandle &,
  size_t current_alignment);
size_t
max_serialized_size_MoraiSimProcHandle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace morai_msgs


namespace morai_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::srv::MoraiSimProcSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: request
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.request,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::srv::MoraiSimProcSrv_Request & ros_message)
{
  // Member: request
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.request);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::srv::MoraiSimProcSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: request

  current_alignment +=
    morai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.request, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_MoraiSimProcSrv_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: request
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MoraiSimProcHandle(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MoraiSimProcSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const morai_msgs::srv::MoraiSimProcSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MoraiSimProcSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<morai_msgs::srv::MoraiSimProcSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MoraiSimProcSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const morai_msgs::srv::MoraiSimProcSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MoraiSimProcSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MoraiSimProcSrv_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MoraiSimProcSrv_Request__callbacks = {
  "morai_msgs::srv",
  "MoraiSimProcSrv_Request",
  _MoraiSimProcSrv_Request__cdr_serialize,
  _MoraiSimProcSrv_Request__cdr_deserialize,
  _MoraiSimProcSrv_Request__get_serialized_size,
  _MoraiSimProcSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _MoraiSimProcSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MoraiSimProcSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::srv::MoraiSimProcSrv_Request>()
{
  return &morai_msgs::srv::typesupport_fastrtps_cpp::_MoraiSimProcSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, srv, MoraiSimProcSrv_Request)() {
  return &morai_msgs::srv::typesupport_fastrtps_cpp::_MoraiSimProcSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace morai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const morai_msgs::msg::MoraiSrvResponse &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  morai_msgs::msg::MoraiSrvResponse &);
size_t get_serialized_size(
  const morai_msgs::msg::MoraiSrvResponse &,
  size_t current_alignment);
size_t
max_serialized_size_MoraiSrvResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace morai_msgs


namespace morai_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::srv::MoraiSimProcSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.response,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::srv::MoraiSimProcSrv_Response & ros_message)
{
  // Member: response
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.response);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::srv::MoraiSimProcSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response

  current_alignment +=
    morai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.response, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_MoraiSimProcSrv_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MoraiSrvResponse(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MoraiSimProcSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const morai_msgs::srv::MoraiSimProcSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MoraiSimProcSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<morai_msgs::srv::MoraiSimProcSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MoraiSimProcSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const morai_msgs::srv::MoraiSimProcSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MoraiSimProcSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MoraiSimProcSrv_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MoraiSimProcSrv_Response__callbacks = {
  "morai_msgs::srv",
  "MoraiSimProcSrv_Response",
  _MoraiSimProcSrv_Response__cdr_serialize,
  _MoraiSimProcSrv_Response__cdr_deserialize,
  _MoraiSimProcSrv_Response__get_serialized_size,
  _MoraiSimProcSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _MoraiSimProcSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MoraiSimProcSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::srv::MoraiSimProcSrv_Response>()
{
  return &morai_msgs::srv::typesupport_fastrtps_cpp::_MoraiSimProcSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, srv, MoraiSimProcSrv_Response)() {
  return &morai_msgs::srv::typesupport_fastrtps_cpp::_MoraiSimProcSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace morai_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _MoraiSimProcSrv__callbacks = {
  "morai_msgs::srv",
  "MoraiSimProcSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, srv, MoraiSimProcSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, srv, MoraiSimProcSrv_Response)(),
};

static rosidl_service_type_support_t _MoraiSimProcSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MoraiSimProcSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<morai_msgs::srv::MoraiSimProcSrv>()
{
  return &morai_msgs::srv::typesupport_fastrtps_cpp::_MoraiSimProcSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, srv, MoraiSimProcSrv)() {
  return &morai_msgs::srv::typesupport_fastrtps_cpp::_MoraiSimProcSrv__handle;
}

#ifdef __cplusplus
}
#endif
