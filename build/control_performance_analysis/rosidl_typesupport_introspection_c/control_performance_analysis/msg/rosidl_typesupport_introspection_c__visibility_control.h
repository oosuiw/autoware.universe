// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_performance_analysis __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_control_performance_analysis __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_performance_analysis __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_control_performance_analysis __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_control_performance_analysis
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_control_performance_analysis ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_performance_analysis
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_control_performance_analysis ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_control_performance_analysis
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_performance_analysis __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_control_performance_analysis
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_control_performance_analysis __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_control_performance_analysis
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
