// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from assignment2_srv:srv/UserInput.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "assignment2_srv/msg/rosidl_typesupport_c__visibility_control.h"
#include "assignment2_srv/srv/detail/user_input__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace assignment2_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_Request_type_support_ids_t;

static const _UserInput_Request_type_support_ids_t _UserInput_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_Request_type_support_symbol_names_t _UserInput_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, UserInput_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, UserInput_Request)),
  }
};

typedef struct _UserInput_Request_type_support_data_t
{
  void * data[2];
} _UserInput_Request_type_support_data_t;

static _UserInput_Request_type_support_data_t _UserInput_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_Request_message_typesupport_map = {
  2,
  "assignment2_srv",
  &_UserInput_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace assignment2_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_assignment2_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, assignment2_srv, srv, UserInput_Request)() {
  return &::assignment2_srv::srv::rosidl_typesupport_c::UserInput_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "assignment2_srv/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "assignment2_srv/srv/detail/user_input__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace assignment2_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_Response_type_support_ids_t;

static const _UserInput_Response_type_support_ids_t _UserInput_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_Response_type_support_symbol_names_t _UserInput_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, UserInput_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, UserInput_Response)),
  }
};

typedef struct _UserInput_Response_type_support_data_t
{
  void * data[2];
} _UserInput_Response_type_support_data_t;

static _UserInput_Response_type_support_data_t _UserInput_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_Response_message_typesupport_map = {
  2,
  "assignment2_srv",
  &_UserInput_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UserInput_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UserInput_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UserInput_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace assignment2_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_assignment2_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, assignment2_srv, srv, UserInput_Response)() {
  return &::assignment2_srv::srv::rosidl_typesupport_c::UserInput_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "assignment2_srv/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace assignment2_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _UserInput_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UserInput_type_support_ids_t;

static const _UserInput_type_support_ids_t _UserInput_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UserInput_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UserInput_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UserInput_type_support_symbol_names_t _UserInput_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, UserInput)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, UserInput)),
  }
};

typedef struct _UserInput_type_support_data_t
{
  void * data[2];
} _UserInput_type_support_data_t;

static _UserInput_type_support_data_t _UserInput_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UserInput_service_typesupport_map = {
  2,
  "assignment2_srv",
  &_UserInput_service_typesupport_ids.typesupport_identifier[0],
  &_UserInput_service_typesupport_symbol_names.symbol_name[0],
  &_UserInput_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UserInput_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UserInput_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace assignment2_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_assignment2_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, assignment2_srv, srv, UserInput)() {
  return &::assignment2_srv::srv::rosidl_typesupport_c::UserInput_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
