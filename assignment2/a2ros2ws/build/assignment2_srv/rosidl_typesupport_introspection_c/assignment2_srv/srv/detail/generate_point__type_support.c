// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assignment2_srv/srv/detail/generate_point__rosidl_typesupport_introspection_c.h"
#include "assignment2_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assignment2_srv/srv/detail/generate_point__functions.h"
#include "assignment2_srv/srv/detail/generate_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment2_srv__srv__GeneratePoint_Request__init(message_memory);
}

void GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_fini_function(void * message_memory)
{
  assignment2_srv__srv__GeneratePoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_member_array[1] = {
  {
    "gp_call",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_srv__srv__GeneratePoint_Request, gp_call),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_members = {
  "assignment2_srv__srv",  // message namespace
  "GeneratePoint_Request",  // message name
  1,  // number of fields
  sizeof(assignment2_srv__srv__GeneratePoint_Request),
  GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_member_array,  // message members
  GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_type_support_handle = {
  0,
  &GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Request)() {
  if (!GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_type_support_handle.typesupport_identifier) {
    GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeneratePoint_Request__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "assignment2_srv/srv/detail/generate_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "assignment2_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "assignment2_srv/srv/detail/generate_point__functions.h"
// already included above
// #include "assignment2_srv/srv/detail/generate_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment2_srv__srv__GeneratePoint_Response__init(message_memory);
}

void GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_fini_function(void * message_memory)
{
  assignment2_srv__srv__GeneratePoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_srv__srv__GeneratePoint_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment2_srv__srv__GeneratePoint_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_members = {
  "assignment2_srv__srv",  // message namespace
  "GeneratePoint_Response",  // message name
  2,  // number of fields
  sizeof(assignment2_srv__srv__GeneratePoint_Response),
  GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_member_array,  // message members
  GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_type_support_handle = {
  0,
  &GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Response)() {
  if (!GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_type_support_handle.typesupport_identifier) {
    GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeneratePoint_Response__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "assignment2_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "assignment2_srv/srv/detail/generate_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_members = {
  "assignment2_srv__srv",  // service namespace
  "GeneratePoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_Request_message_type_support_handle,
  NULL  // response message
  // assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_type_support_handle = {
  0,
  &assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment2_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint)() {
  if (!assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_type_support_handle.typesupport_identifier) {
    assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Response)()->data;
  }

  return &assignment2_srv__srv__detail__generate_point__rosidl_typesupport_introspection_c__GeneratePoint_service_type_support_handle;
}
