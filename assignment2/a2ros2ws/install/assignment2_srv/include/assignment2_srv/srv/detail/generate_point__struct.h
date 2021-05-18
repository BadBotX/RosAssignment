// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__STRUCT_H_
#define ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GeneratePoint in the package assignment2_srv.
typedef struct assignment2_srv__srv__GeneratePoint_Request
{
  bool gp_call;
} assignment2_srv__srv__GeneratePoint_Request;

// Struct for a sequence of assignment2_srv__srv__GeneratePoint_Request.
typedef struct assignment2_srv__srv__GeneratePoint_Request__Sequence
{
  assignment2_srv__srv__GeneratePoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_srv__srv__GeneratePoint_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GeneratePoint in the package assignment2_srv.
typedef struct assignment2_srv__srv__GeneratePoint_Response
{
  double x;
  double y;
} assignment2_srv__srv__GeneratePoint_Response;

// Struct for a sequence of assignment2_srv__srv__GeneratePoint_Response.
typedef struct assignment2_srv__srv__GeneratePoint_Response__Sequence
{
  assignment2_srv__srv__GeneratePoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_srv__srv__GeneratePoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__STRUCT_H_
