// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist_with_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `acceleration_with_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"

bool
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(autoware_auto_perception_msgs__msg__TrackedObjectKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose_with_covariance)) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(msg);
    return false;
  }
  // orientation_availability
  // twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist_with_covariance)) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(msg);
    return false;
  }
  // acceleration_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->acceleration_with_covariance)) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(msg);
    return false;
  }
  // is_stationary
  return true;
}

void
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(autoware_auto_perception_msgs__msg__TrackedObjectKinematics * msg)
{
  if (!msg) {
    return;
  }
  // pose_with_covariance
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose_with_covariance);
  // orientation_availability
  // twist_with_covariance
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist_with_covariance);
  // acceleration_with_covariance
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->acceleration_with_covariance);
  // is_stationary
}

bool
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__are_equal(const autoware_auto_perception_msgs__msg__TrackedObjectKinematics * lhs, const autoware_auto_perception_msgs__msg__TrackedObjectKinematics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose_with_covariance), &(rhs->pose_with_covariance)))
  {
    return false;
  }
  // orientation_availability
  if (lhs->orientation_availability != rhs->orientation_availability) {
    return false;
  }
  // twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist_with_covariance), &(rhs->twist_with_covariance)))
  {
    return false;
  }
  // acceleration_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__are_equal(
      &(lhs->acceleration_with_covariance), &(rhs->acceleration_with_covariance)))
  {
    return false;
  }
  // is_stationary
  if (lhs->is_stationary != rhs->is_stationary) {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__copy(
  const autoware_auto_perception_msgs__msg__TrackedObjectKinematics * input,
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics * output)
{
  if (!input || !output) {
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose_with_covariance), &(output->pose_with_covariance)))
  {
    return false;
  }
  // orientation_availability
  output->orientation_availability = input->orientation_availability;
  // twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist_with_covariance), &(output->twist_with_covariance)))
  {
    return false;
  }
  // acceleration_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__copy(
      &(input->acceleration_with_covariance), &(output->acceleration_with_covariance)))
  {
    return false;
  }
  // is_stationary
  output->is_stationary = input->is_stationary;
  return true;
}

autoware_auto_perception_msgs__msg__TrackedObjectKinematics *
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics * msg = (autoware_auto_perception_msgs__msg__TrackedObjectKinematics *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics));
  bool success = autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__destroy(autoware_auto_perception_msgs__msg__TrackedObjectKinematics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__init(autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__TrackedObjectKinematics *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__fini(autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * array)
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
      autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence *
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * array = (autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__destroy(autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__are_equal(const autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * lhs, const autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence__copy(
  const autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * input,
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__TrackedObjectKinematics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__TrackedObjectKinematics * data =
      (autoware_auto_perception_msgs__msg__TrackedObjectKinematics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__TrackedObjectKinematics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrackedObjectKinematics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
