// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_vehicle_msgs:msg/HandBrakeCommand.idl
// generated code does not contain a copyright notice
#include "autoware_auto_vehicle_msgs/msg/detail/hand_brake_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__init(autoware_auto_vehicle_msgs__msg__HandBrakeCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_vehicle_msgs__msg__HandBrakeCommand__fini(msg);
    return false;
  }
  // active
  msg->active = false;
  return true;
}

void
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__fini(autoware_auto_vehicle_msgs__msg__HandBrakeCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // active
}

bool
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__are_equal(const autoware_auto_vehicle_msgs__msg__HandBrakeCommand * lhs, const autoware_auto_vehicle_msgs__msg__HandBrakeCommand * rhs)
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
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__copy(
  const autoware_auto_vehicle_msgs__msg__HandBrakeCommand * input,
  autoware_auto_vehicle_msgs__msg__HandBrakeCommand * output)
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
  // active
  output->active = input->active;
  return true;
}

autoware_auto_vehicle_msgs__msg__HandBrakeCommand *
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__msg__HandBrakeCommand * msg = (autoware_auto_vehicle_msgs__msg__HandBrakeCommand *)allocator.allocate(sizeof(autoware_auto_vehicle_msgs__msg__HandBrakeCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_vehicle_msgs__msg__HandBrakeCommand));
  bool success = autoware_auto_vehicle_msgs__msg__HandBrakeCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__destroy(autoware_auto_vehicle_msgs__msg__HandBrakeCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_vehicle_msgs__msg__HandBrakeCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__init(autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__msg__HandBrakeCommand * data = NULL;

  if (size) {
    data = (autoware_auto_vehicle_msgs__msg__HandBrakeCommand *)allocator.zero_allocate(size, sizeof(autoware_auto_vehicle_msgs__msg__HandBrakeCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_vehicle_msgs__msg__HandBrakeCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_vehicle_msgs__msg__HandBrakeCommand__fini(&data[i - 1]);
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
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__fini(autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * array)
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
      autoware_auto_vehicle_msgs__msg__HandBrakeCommand__fini(&array->data[i]);
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

autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence *
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * array = (autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence *)allocator.allocate(sizeof(autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__destroy(autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__are_equal(const autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * lhs, const autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_vehicle_msgs__msg__HandBrakeCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence__copy(
  const autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * input,
  autoware_auto_vehicle_msgs__msg__HandBrakeCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_vehicle_msgs__msg__HandBrakeCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_vehicle_msgs__msg__HandBrakeCommand * data =
      (autoware_auto_vehicle_msgs__msg__HandBrakeCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_vehicle_msgs__msg__HandBrakeCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_vehicle_msgs__msg__HandBrakeCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_vehicle_msgs__msg__HandBrakeCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
