// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__FUNCTIONS_H_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_performance_analysis/msg/rosidl_generator_c__visibility_control.h"

#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.h"

/// Initialize msg/DrivingMonitorStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_performance_analysis__msg__DrivingMonitorStamped
 * )) before or use
 * control_performance_analysis__msg__DrivingMonitorStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
bool
control_performance_analysis__msg__DrivingMonitorStamped__init(control_performance_analysis__msg__DrivingMonitorStamped * msg);

/// Finalize msg/DrivingMonitorStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
void
control_performance_analysis__msg__DrivingMonitorStamped__fini(control_performance_analysis__msg__DrivingMonitorStamped * msg);

/// Create msg/DrivingMonitorStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_performance_analysis__msg__DrivingMonitorStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
control_performance_analysis__msg__DrivingMonitorStamped *
control_performance_analysis__msg__DrivingMonitorStamped__create();

/// Destroy msg/DrivingMonitorStamped message.
/**
 * It calls
 * control_performance_analysis__msg__DrivingMonitorStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
void
control_performance_analysis__msg__DrivingMonitorStamped__destroy(control_performance_analysis__msg__DrivingMonitorStamped * msg);

/// Check for msg/DrivingMonitorStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
bool
control_performance_analysis__msg__DrivingMonitorStamped__are_equal(const control_performance_analysis__msg__DrivingMonitorStamped * lhs, const control_performance_analysis__msg__DrivingMonitorStamped * rhs);

/// Copy a msg/DrivingMonitorStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
bool
control_performance_analysis__msg__DrivingMonitorStamped__copy(
  const control_performance_analysis__msg__DrivingMonitorStamped * input,
  control_performance_analysis__msg__DrivingMonitorStamped * output);

/// Initialize array of msg/DrivingMonitorStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_performance_analysis__msg__DrivingMonitorStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
bool
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__init(control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array, size_t size);

/// Finalize array of msg/DrivingMonitorStamped messages.
/**
 * It calls
 * control_performance_analysis__msg__DrivingMonitorStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
void
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__fini(control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array);

/// Create array of msg/DrivingMonitorStamped messages.
/**
 * It allocates the memory for the array and calls
 * control_performance_analysis__msg__DrivingMonitorStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
control_performance_analysis__msg__DrivingMonitorStamped__Sequence *
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__create(size_t size);

/// Destroy array of msg/DrivingMonitorStamped messages.
/**
 * It calls
 * control_performance_analysis__msg__DrivingMonitorStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
void
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__destroy(control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array);

/// Check for msg/DrivingMonitorStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
bool
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__are_equal(const control_performance_analysis__msg__DrivingMonitorStamped__Sequence * lhs, const control_performance_analysis__msg__DrivingMonitorStamped__Sequence * rhs);

/// Copy an array of msg/DrivingMonitorStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_performance_analysis
bool
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__copy(
  const control_performance_analysis__msg__DrivingMonitorStamped__Sequence * input,
  control_performance_analysis__msg__DrivingMonitorStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__FUNCTIONS_H_
