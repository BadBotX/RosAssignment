// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "assignment2_srv/msg/rosidl_typesupport_c__visibility_control.h"
#include "assignment2_srv/srv/detail/generate_point__struct.h"
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

typedef struct _GeneratePoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GeneratePoint_Request_type_support_ids_t;

static const _GeneratePoint_Request_type_support_ids_t _GeneratePoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GeneratePoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GeneratePoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GeneratePoint_Request_type_support_symbol_names_t _GeneratePoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Request)),
  }
};

typedef struct _GeneratePoint_Request_type_support_data_t
{
  void * data[2];
} _GeneratePoint_Request_type_support_data_t;

static _GeneratePoint_Request_type_support_data_t _GeneratePoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GeneratePoint_Request_message_typesupport_map = {
  2,
  "assignment2_srv",
  &_GeneratePoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GeneratePoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GeneratePoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GeneratePoint_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GeneratePoint_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, assignment2_srv, srv, GeneratePoint_Request)() {
  return &::assignment2_srv::srv::rosidl_typesupport_c::GeneratePoint_Request_message_type_support_handle;
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
// #include "assignment2_srv/srv/detail/generate_point__struct.h"
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

typedef struct _GeneratePoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GeneratePoint_Response_type_support_ids_t;

static const _GeneratePoint_Response_type_support_ids_t _GeneratePoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GeneratePoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GeneratePoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GeneratePoint_Response_type_support_symbol_names_t _GeneratePoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint_Response)),
  }
};

typedef struct _GeneratePoint_Response_type_support_data_t
{
  void * data[2];
} _GeneratePoint_Response_type_support_data_t;

static _GeneratePoint_Response_type_support_data_t _GeneratePoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GeneratePoint_Response_message_typesupport_map = {
  2,
  "assignment2_srv",
  &_GeneratePoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GeneratePoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GeneratePoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GeneratePoint_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GeneratePoint_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, assignment2_srv, srv, GeneratePoint_Response)() {
  return &::assignment2_srv::srv::rosidl_typesupport_c::GeneratePoint_Response_message_type_support_handle;
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

typedef struct _GeneratePoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GeneratePoint_type_support_ids_t;

static const _GeneratePoint_type_support_ids_t _GeneratePoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GeneratePoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GeneratePoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GeneratePoint_type_support_symbol_names_t _GeneratePoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_srv, srv, GeneratePoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment2_srv, srv, GeneratePoint)),
  }
};

typedef struct _GeneratePoint_type_support_data_t
{
  void * data[2];
} _GeneratePoint_type_support_data_t;

static _GeneratePoint_type_support_data_t _GeneratePoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GeneratePoint_service_typesupport_map = {
  2,
  "assignment2_srv",
  &_GeneratePoint_service_typesupport_ids.typesupport_identifier[0],
  &_GeneratePoint_service_typesupport_symbol_names.symbol_name[0],
  &_GeneratePoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GeneratePoint_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GeneratePoint_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, assignment2_srv, srv, GeneratePoint)() {
  return &::assignment2_srv::srv::rosidl_typesupport_c::GeneratePoint_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
