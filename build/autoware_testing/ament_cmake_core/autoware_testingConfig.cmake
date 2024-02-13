# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_autoware_testing_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED autoware_testing_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(autoware_testing_FOUND FALSE)
  elseif(NOT autoware_testing_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(autoware_testing_FOUND FALSE)
  endif()
  return()
endif()
set(_autoware_testing_CONFIG_INCLUDED TRUE)

# output package information
if(NOT autoware_testing_FIND_QUIETLY)
  message(STATUS "Found autoware_testing: 0.1.0 (${autoware_testing_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'autoware_testing' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${autoware_testing_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(autoware_testing_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "autoware_testing-extras.cmake")
foreach(_extra ${_extras})
  include("${autoware_testing_DIR}/${_extra}")
endforeach()
