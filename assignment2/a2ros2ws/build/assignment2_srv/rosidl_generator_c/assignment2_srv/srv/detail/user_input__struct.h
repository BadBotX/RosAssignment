// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_srv:srv/UserInput.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__STRUCT_H_
#define ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/UserInput in the package assignment2_srv.
typedef struct assignment2_srv__srv__UserInput_Request
{
  int64_t user_input;
} assignment2_srv__srv__UserInput_Request;

// Struct for a sequence of assignment2_srv__srv__UserInput_Request.
typedef struct assignment2_srv__srv__UserInput_Request__Sequence
{
  assignment2_srv__srv__UserInput_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_srv__srv__UserInput_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/UserInput in the package assignment2_srv.
typedef struct assignment2_srv__srv__UserInput_Response
{
  bool success;
} assignment2_srv__srv__UserInput_Response;

// Struct for a sequence of assignment2_srv__srv__UserInput_Response.
typedef struct assignment2_srv__srv__UserInput_Response__Sequence
{
  assignment2_srv__srv__UserInput_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_srv__srv__UserInput_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__STRUCT_H_
