// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_rtc_msgs:msg/AutoModeStatus.idl
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
#include "tier4_rtc_msgs/msg/detail/auto_mode_status__struct.h"
#include "tier4_rtc_msgs/msg/detail/auto_mode_status__functions.h"

bool tier4_rtc_msgs__msg__module__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_rtc_msgs__msg__module__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_rtc_msgs__msg__auto_mode_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("tier4_rtc_msgs.msg._auto_mode_status.AutoModeStatus", full_classname_dest, 51) == 0);
  }
  tier4_rtc_msgs__msg__AutoModeStatus * ros_message = _ros_message;
  {  // module
    PyObject * field = PyObject_GetAttrString(_pymsg, "module");
    if (!field) {
      return false;
    }
    if (!tier4_rtc_msgs__msg__module__convert_from_py(field, &ros_message->module)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_auto_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_auto_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_auto_mode = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_rtc_msgs__msg__auto_mode_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutoModeStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_rtc_msgs.msg._auto_mode_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutoModeStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_rtc_msgs__msg__AutoModeStatus * ros_message = (tier4_rtc_msgs__msg__AutoModeStatus *)raw_ros_message;
  {  // module
    PyObject * field = NULL;
    field = tier4_rtc_msgs__msg__module__convert_to_py(&ros_message->module);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "module", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_auto_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_auto_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_auto_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
