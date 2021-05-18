// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice
#include "assignment2_srv/srv/detail/generate_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "assignment2_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "assignment2_srv/srv/detail/generate_point__struct.h"
#include "assignment2_srv/srv/detail/generate_point__functions.h"
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


using _GeneratePoint_Request__ros_msg_type = assignment2_srv__srv__GeneratePoint_Request;

static bool _GeneratePoint_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GeneratePoint_Request__ros_msg_type * ros_message = static_cast<const _GeneratePoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: gp_call
  {
    cdr << (ros_message->gp_call ? true : false);
  }

  return true;
}

static bool _GeneratePoint_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GeneratePoint_Request__ros_msg_type * ros_message = static_cast<_GeneratePoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: gp_call
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gp_call = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_srv
size_t get_serialized_size_assignment2_srv__srv__GeneratePoint_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GeneratePoint_Request__ros_msg_type * ros_message = static_cast<const _GeneratePoint_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gp_call
  {
    size_t item_size = sizeof(ros_message->gp_call);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GeneratePoint_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_assignment2_srv__srv__GeneratePoint_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_srv
size_t max_serialized_size_assignment2_srv__srv__GeneratePoint_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gp_call
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GeneratePoint_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_assignment2_srv__srv__GeneratePoint_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GeneratePoint_Request = {
  "assignment2_srv::srv",
  "GeneratePoint_Request",
  _GeneratePoint_Request__cdr_serialize,
  _GeneratePoint_Request__cdr_deserialize,
  _GeneratePoint_Request__get_serialized_size,
  _GeneratePoint_Request__max_serialized_size
};

static rosidl_message_type_support_t _GeneratePoint_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GeneratePoint_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint_Request)() {
  return &_GeneratePoint_Request__type_support;
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
// #include "assignment2_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "assignment2_srv/srv/detail/generate_point__struct.h"
// already included above
// #include "assignment2_srv/srv/detail/generate_point__functions.h"
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


// forward declare type support functions


using _GeneratePoint_Response__ros_msg_type = assignment2_srv__srv__GeneratePoint_Response;

static bool _GeneratePoint_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GeneratePoint_Response__ros_msg_type * ros_message = static_cast<const _GeneratePoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _GeneratePoint_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GeneratePoint_Response__ros_msg_type * ros_message = static_cast<_GeneratePoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_srv
size_t get_serialized_size_assignment2_srv__srv__GeneratePoint_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GeneratePoint_Response__ros_msg_type * ros_message = static_cast<const _GeneratePoint_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GeneratePoint_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_assignment2_srv__srv__GeneratePoint_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_srv
size_t max_serialized_size_assignment2_srv__srv__GeneratePoint_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GeneratePoint_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_assignment2_srv__srv__GeneratePoint_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GeneratePoint_Response = {
  "assignment2_srv::srv",
  "GeneratePoint_Response",
  _GeneratePoint_Response__cdr_serialize,
  _GeneratePoint_Response__cdr_deserialize,
  _GeneratePoint_Response__get_serialized_size,
  _GeneratePoint_Response__max_serialized_size
};

static rosidl_message_type_support_t _GeneratePoint_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GeneratePoint_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint_Response)() {
  return &_GeneratePoint_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "assignment2_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "assignment2_srv/srv/generate_point.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GeneratePoint__callbacks = {
  "assignment2_srv::srv",
  "GeneratePoint",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint_Response)(),
};

static rosidl_service_type_support_t GeneratePoint__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GeneratePoint__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint)() {
  return &GeneratePoint__handle;
}

#if defined(__cplusplus)
}
#endif
