// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_rtc_msgs:msg/AutoModeStatusArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_rtc_msgs/msg/detail/auto_mode_status_array__struct.h"
#include "tier4_rtc_msgs/msg/detail/auto_mode_status_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tier4_rtc_msgs/msg/detail/auto_mode_status__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool tier4_rtc_msgs__msg__auto_mode_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_rtc_msgs__msg__auto_mode_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_rtc_msgs__msg__auto_mode_status_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tier4_rtc_msgs.msg._auto_mode_status_array.AutoModeStatusArray", full_classname_dest, 62) == 0);
  }
  tier4_rtc_msgs__msg__AutoModeStatusArray * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // statuses
    PyObject * field = PyObject_GetAttrString(_pymsg, "statuses");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'statuses'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tier4_rtc_msgs__msg__AutoModeStatus__Sequence__init(&(ros_message->statuses), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tier4_rtc_msgs__msg__AutoModeStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tier4_rtc_msgs__msg__AutoModeStatus * dest = ros_message->statuses.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tier4_rtc_msgs__msg__auto_mode_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_rtc_msgs__msg__auto_mode_status_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutoModeStatusArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_rtc_msgs.msg._auto_mode_status_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutoModeStatusArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_rtc_msgs__msg__AutoModeStatusArray * ros_message = (tier4_rtc_msgs__msg__AutoModeStatusArray *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // statuses
    PyObject * field = NULL;
    size_t size = ros_message->statuses.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tier4_rtc_msgs__msg__AutoModeStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->statuses.data[i]);
      PyObject * pyitem = tier4_rtc_msgs__msg__auto_mode_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "statuses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
