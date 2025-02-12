// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_control_msgs:srv/SetPause.idl
// generated code does not contain a copyright notice
#include "tier4_control_msgs/srv/detail/set_pause__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_control_msgs/srv/detail/set_pause__struct.h"
#include "tier4_control_msgs/srv/detail/set_pause__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetPause_Request__ros_msg_type = tier4_control_msgs__srv__SetPause_Request;

static bool _SetPause_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPause_Request__ros_msg_type * ros_message = static_cast<const _SetPause_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pause
  {
    cdr << (ros_message->pause ? true : false);
  }

  return true;
}

static bool _SetPause_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPause_Request__ros_msg_type * ros_message = static_cast<_SetPause_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pause = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t get_serialized_size_tier4_control_msgs__srv__SetPause_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPause_Request__ros_msg_type * ros_message = static_cast<const _SetPause_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pause
  {
    size_t item_size = sizeof(ros_message->pause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPause_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_control_msgs__srv__SetPause_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t max_serialized_size_tier4_control_msgs__srv__SetPause_Request(
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

  // member: pause
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPause_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_control_msgs__srv__SetPause_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPause_Request = {
  "tier4_control_msgs::srv",
  "SetPause_Request",
  _SetPause_Request__cdr_serialize,
  _SetPause_Request__cdr_deserialize,
  _SetPause_Request__get_serialized_size,
  _SetPause_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPause_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPause_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, SetPause_Request)() {
  return &_SetPause_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tier4_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tier4_control_msgs/srv/detail/set_pause__struct.h"
// already included above
// #include "tier4_control_msgs/srv/detail/set_pause__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_common_msgs/msg/detail/response_status__functions.h"  // status

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_control_msgs
size_t get_serialized_size_autoware_common_msgs__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_control_msgs
size_t max_serialized_size_autoware_common_msgs__msg__ResponseStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_common_msgs, msg, ResponseStatus)();


using _SetPause_Response__ros_msg_type = tier4_control_msgs__srv__SetPause_Response;

static bool _SetPause_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPause_Response__ros_msg_type * ros_message = static_cast<const _SetPause_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_common_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SetPause_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPause_Response__ros_msg_type * ros_message = static_cast<_SetPause_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_common_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t get_serialized_size_tier4_control_msgs__srv__SetPause_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPause_Response__ros_msg_type * ros_message = static_cast<const _SetPause_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_autoware_common_msgs__msg__ResponseStatus(
    &(ros_message->status), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetPause_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_control_msgs__srv__SetPause_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t max_serialized_size_tier4_control_msgs__srv__SetPause_Response(
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

  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_autoware_common_msgs__msg__ResponseStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPause_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_control_msgs__srv__SetPause_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPause_Response = {
  "tier4_control_msgs::srv",
  "SetPause_Response",
  _SetPause_Response__cdr_serialize,
  _SetPause_Response__cdr_deserialize,
  _SetPause_Response__get_serialized_size,
  _SetPause_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPause_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPause_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, SetPause_Response)() {
  return &_SetPause_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tier4_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_control_msgs/srv/set_pause.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPause__callbacks = {
  "tier4_control_msgs::srv",
  "SetPause",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, SetPause_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, SetPause_Response)(),
};

static rosidl_service_type_support_t SetPause__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPause__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, SetPause)() {
  return &SetPause__handle;
}

#if defined(__cplusplus)
}
#endif
