# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${lidar_apollo_segmentation_tvm_DIR}/../../../include")

# append include directories to lidar_apollo_segmentation_tvm_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'lidar_apollo_segmentation_tvm' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND lidar_apollo_segmentation_tvm_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
