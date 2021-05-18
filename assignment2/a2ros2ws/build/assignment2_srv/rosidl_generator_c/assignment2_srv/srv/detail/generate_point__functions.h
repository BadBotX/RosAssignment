// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__FUNCTIONS_H_
#define ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "assignment2_srv/msg/rosidl_generator_c__visibility_control.h"

#include "assignment2_srv/srv/detail/generate_point__struct.h"

/// Initialize srv/GeneratePoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * assignment2_srv__srv__GeneratePoint_Request
 * )) before or use
 * assignment2_srv__srv__GeneratePoint_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
bool
assignment2_srv__srv__GeneratePoint_Request__init(assignment2_srv__srv__GeneratePoint_Request * msg);

/// Finalize srv/GeneratePoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Request__fini(assignment2_srv__srv__GeneratePoint_Request * msg);

/// Create srv/GeneratePoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * assignment2_srv__srv__GeneratePoint_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
assignment2_srv__srv__GeneratePoint_Request *
assignment2_srv__srv__GeneratePoint_Request__create();

/// Destroy srv/GeneratePoint message.
/**
 * It calls
 * assignment2_srv__srv__GeneratePoint_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Request__destroy(assignment2_srv__srv__GeneratePoint_Request * msg);


/// Initialize array of srv/GeneratePoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * assignment2_srv__srv__GeneratePoint_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
bool
assignment2_srv__srv__GeneratePoint_Request__Sequence__init(assignment2_srv__srv__GeneratePoint_Request__Sequence * array, size_t size);

/// Finalize array of srv/GeneratePoint messages.
/**
 * It calls
 * assignment2_srv__srv__GeneratePoint_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Request__Sequence__fini(assignment2_srv__srv__GeneratePoint_Request__Sequence * array);

/// Create array of srv/GeneratePoint messages.
/**
 * It allocates the memory for the array and calls
 * assignment2_srv__srv__GeneratePoint_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
assignment2_srv__srv__GeneratePoint_Request__Sequence *
assignment2_srv__srv__GeneratePoint_Request__Sequence__create(size_t size);

/// Destroy array of srv/GeneratePoint messages.
/**
 * It calls
 * assignment2_srv__srv__GeneratePoint_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Request__Sequence__destroy(assignment2_srv__srv__GeneratePoint_Request__Sequence * array);

/// Initialize srv/GeneratePoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * assignment2_srv__srv__GeneratePoint_Response
 * )) before or use
 * assignment2_srv__srv__GeneratePoint_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
bool
assignment2_srv__srv__GeneratePoint_Response__init(assignment2_srv__srv__GeneratePoint_Response * msg);

/// Finalize srv/GeneratePoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Response__fini(assignment2_srv__srv__GeneratePoint_Response * msg);

/// Create srv/GeneratePoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * assignment2_srv__srv__GeneratePoint_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
assignment2_srv__srv__GeneratePoint_Response *
assignment2_srv__srv__GeneratePoint_Response__create();

/// Destroy srv/GeneratePoint message.
/**
 * It calls
 * assignment2_srv__srv__GeneratePoint_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Response__destroy(assignment2_srv__srv__GeneratePoint_Response * msg);


/// Initialize array of srv/GeneratePoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * assignment2_srv__srv__GeneratePoint_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
bool
assignment2_srv__srv__GeneratePoint_Response__Sequence__init(assignment2_srv__srv__GeneratePoint_Response__Sequence * array, size_t size);

/// Finalize array of srv/GeneratePoint messages.
/**
 * It calls
 * assignment2_srv__srv__GeneratePoint_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Response__Sequence__fini(assignment2_srv__srv__GeneratePoint_Response__Sequence * array);

/// Create array of srv/GeneratePoint messages.
/**
 * It allocates the memory for the array and calls
 * assignment2_srv__srv__GeneratePoint_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
assignment2_srv__srv__GeneratePoint_Response__Sequence *
assignment2_srv__srv__GeneratePoint_Response__Sequence__create(size_t size);

/// Destroy array of srv/GeneratePoint messages.
/**
 * It calls
 * assignment2_srv__srv__GeneratePoint_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_assignment2_srv
void
assignment2_srv__srv__GeneratePoint_Response__Sequence__destroy(assignment2_srv__srv__GeneratePoint_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__FUNCTIONS_H_
