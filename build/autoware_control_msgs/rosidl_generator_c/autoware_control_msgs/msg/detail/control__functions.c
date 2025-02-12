// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "autoware_control_msgs/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
// Member `control_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `lateral`
#include "autoware_control_msgs/msg/detail/lateral__functions.h"
// Member `longitudinal`
#include "autoware_control_msgs/msg/detail/longitudinal__functions.h"

bool
autoware_control_msgs__msg__Control__init(autoware_control_msgs__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_control_msgs__msg__Control__fini(msg);
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__init(&msg->control_time)) {
    autoware_control_msgs__msg__Control__fini(msg);
    return false;
  }
  // lateral
  if (!autoware_control_msgs__msg__Lateral__init(&msg->lateral)) {
    autoware_control_msgs__msg__Control__fini(msg);
    return false;
  }
  // longitudinal
  if (!autoware_control_msgs__msg__Longitudinal__init(&msg->longitudinal)) {
    autoware_control_msgs__msg__Control__fini(msg);
    return false;
  }
  return true;
}

void
autoware_control_msgs__msg__Control__fini(autoware_control_msgs__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // control_time
  builtin_interfaces__msg__Time__fini(&msg->control_time);
  // lateral
  autoware_control_msgs__msg__Lateral__fini(&msg->lateral);
  // longitudinal
  autoware_control_msgs__msg__Longitudinal__fini(&msg->longitudinal);
}

bool
autoware_control_msgs__msg__Control__are_equal(const autoware_control_msgs__msg__Control * lhs, const autoware_control_msgs__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->control_time), &(rhs->control_time)))
  {
    return false;
  }
  // lateral
  if (!autoware_control_msgs__msg__Lateral__are_equal(
      &(lhs->lateral), &(rhs->lateral)))
  {
    return false;
  }
  // longitudinal
  if (!autoware_control_msgs__msg__Longitudinal__are_equal(
      &(lhs->longitudinal), &(rhs->longitudinal)))
  {
    return false;
  }
  return true;
}

bool
autoware_control_msgs__msg__Control__copy(
  const autoware_control_msgs__msg__Control * input,
  autoware_control_msgs__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // control_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->control_time), &(output->control_time)))
  {
    return false;
  }
  // lateral
  if (!autoware_control_msgs__msg__Lateral__copy(
      &(input->lateral), &(output->lateral)))
  {
    return false;
  }
  // longitudinal
  if (!autoware_control_msgs__msg__Longitudinal__copy(
      &(input->longitudinal), &(output->longitudinal)))
  {
    return false;
  }
  return true;
}

autoware_control_msgs__msg__Control *
autoware_control_msgs__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_control_msgs__msg__Control * msg = (autoware_control_msgs__msg__Control *)allocator.allocate(sizeof(autoware_control_msgs__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_control_msgs__msg__Control));
  bool success = autoware_control_msgs__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_control_msgs__msg__Control__destroy(autoware_control_msgs__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_control_msgs__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_control_msgs__msg__Control__Sequence__init(autoware_control_msgs__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_control_msgs__msg__Control * data = NULL;

  if (size) {
    data = (autoware_control_msgs__msg__Control *)allocator.zero_allocate(size, sizeof(autoware_control_msgs__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_control_msgs__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_control_msgs__msg__Control__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_control_msgs__msg__Control__Sequence__fini(autoware_control_msgs__msg__Control__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_control_msgs__msg__Control__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_control_msgs__msg__Control__Sequence *
autoware_control_msgs__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_control_msgs__msg__Control__Sequence * array = (autoware_control_msgs__msg__Control__Sequence *)allocator.allocate(sizeof(autoware_control_msgs__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_control_msgs__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_control_msgs__msg__Control__Sequence__destroy(autoware_control_msgs__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_control_msgs__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_control_msgs__msg__Control__Sequence__are_equal(const autoware_control_msgs__msg__Control__Sequence * lhs, const autoware_control_msgs__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_control_msgs__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_control_msgs__msg__Control__Sequence__copy(
  const autoware_control_msgs__msg__Control__Sequence * input,
  autoware_control_msgs__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_control_msgs__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_control_msgs__msg__Control * data =
      (autoware_control_msgs__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_control_msgs__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_control_msgs__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_control_msgs__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
