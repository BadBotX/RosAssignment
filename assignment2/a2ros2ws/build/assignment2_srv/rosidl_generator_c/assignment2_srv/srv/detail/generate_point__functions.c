// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice
#include "assignment2_srv/srv/detail/generate_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
assignment2_srv__srv__GeneratePoint_Request__init(assignment2_srv__srv__GeneratePoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // gp_call
  return true;
}

void
assignment2_srv__srv__GeneratePoint_Request__fini(assignment2_srv__srv__GeneratePoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // gp_call
}

assignment2_srv__srv__GeneratePoint_Request *
assignment2_srv__srv__GeneratePoint_Request__create()
{
  assignment2_srv__srv__GeneratePoint_Request * msg = (assignment2_srv__srv__GeneratePoint_Request *)malloc(sizeof(assignment2_srv__srv__GeneratePoint_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment2_srv__srv__GeneratePoint_Request));
  bool success = assignment2_srv__srv__GeneratePoint_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
assignment2_srv__srv__GeneratePoint_Request__destroy(assignment2_srv__srv__GeneratePoint_Request * msg)
{
  if (msg) {
    assignment2_srv__srv__GeneratePoint_Request__fini(msg);
  }
  free(msg);
}


bool
assignment2_srv__srv__GeneratePoint_Request__Sequence__init(assignment2_srv__srv__GeneratePoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  assignment2_srv__srv__GeneratePoint_Request * data = NULL;
  if (size) {
    data = (assignment2_srv__srv__GeneratePoint_Request *)calloc(size, sizeof(assignment2_srv__srv__GeneratePoint_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment2_srv__srv__GeneratePoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment2_srv__srv__GeneratePoint_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
assignment2_srv__srv__GeneratePoint_Request__Sequence__fini(assignment2_srv__srv__GeneratePoint_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      assignment2_srv__srv__GeneratePoint_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

assignment2_srv__srv__GeneratePoint_Request__Sequence *
assignment2_srv__srv__GeneratePoint_Request__Sequence__create(size_t size)
{
  assignment2_srv__srv__GeneratePoint_Request__Sequence * array = (assignment2_srv__srv__GeneratePoint_Request__Sequence *)malloc(sizeof(assignment2_srv__srv__GeneratePoint_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = assignment2_srv__srv__GeneratePoint_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
assignment2_srv__srv__GeneratePoint_Request__Sequence__destroy(assignment2_srv__srv__GeneratePoint_Request__Sequence * array)
{
  if (array) {
    assignment2_srv__srv__GeneratePoint_Request__Sequence__fini(array);
  }
  free(array);
}


bool
assignment2_srv__srv__GeneratePoint_Response__init(assignment2_srv__srv__GeneratePoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
assignment2_srv__srv__GeneratePoint_Response__fini(assignment2_srv__srv__GeneratePoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

assignment2_srv__srv__GeneratePoint_Response *
assignment2_srv__srv__GeneratePoint_Response__create()
{
  assignment2_srv__srv__GeneratePoint_Response * msg = (assignment2_srv__srv__GeneratePoint_Response *)malloc(sizeof(assignment2_srv__srv__GeneratePoint_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment2_srv__srv__GeneratePoint_Response));
  bool success = assignment2_srv__srv__GeneratePoint_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
assignment2_srv__srv__GeneratePoint_Response__destroy(assignment2_srv__srv__GeneratePoint_Response * msg)
{
  if (msg) {
    assignment2_srv__srv__GeneratePoint_Response__fini(msg);
  }
  free(msg);
}


bool
assignment2_srv__srv__GeneratePoint_Response__Sequence__init(assignment2_srv__srv__GeneratePoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  assignment2_srv__srv__GeneratePoint_Response * data = NULL;
  if (size) {
    data = (assignment2_srv__srv__GeneratePoint_Response *)calloc(size, sizeof(assignment2_srv__srv__GeneratePoint_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment2_srv__srv__GeneratePoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment2_srv__srv__GeneratePoint_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
assignment2_srv__srv__GeneratePoint_Response__Sequence__fini(assignment2_srv__srv__GeneratePoint_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      assignment2_srv__srv__GeneratePoint_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

assignment2_srv__srv__GeneratePoint_Response__Sequence *
assignment2_srv__srv__GeneratePoint_Response__Sequence__create(size_t size)
{
  assignment2_srv__srv__GeneratePoint_Response__Sequence * array = (assignment2_srv__srv__GeneratePoint_Response__Sequence *)malloc(sizeof(assignment2_srv__srv__GeneratePoint_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = assignment2_srv__srv__GeneratePoint_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
assignment2_srv__srv__GeneratePoint_Response__Sequence__destroy(assignment2_srv__srv__GeneratePoint_Response__Sequence * array)
{
  if (array) {
    assignment2_srv__srv__GeneratePoint_Response__Sequence__fini(array);
  }
  free(array);
}
