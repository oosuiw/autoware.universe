# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_planning_validator_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED planning_validator_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(planning_validator_FOUND FALSE)
  elseif(NOT planning_validator_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(planning_validator_FOUND FALSE)
  endif()
  return()
endif()
set(_planning_validator_CONFIG_INCLUDED TRUE)

# output package information
if(NOT planning_validator_FIND_QUIETLY)
  message(STATUS "Found planning_validator: 0.1.0 (${planning_validator_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'planning_validator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${planning_validator_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(planning_validator_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${planning_validator_DIR}/${_extra}")
endforeach()
