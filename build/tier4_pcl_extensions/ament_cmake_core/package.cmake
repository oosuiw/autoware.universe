set(_AMENT_PACKAGE_NAME "tier4_pcl_extensions")
set(tier4_pcl_extensions_VERSION "0.1.0")
set(tier4_pcl_extensions_MAINTAINER "Ryu Yamamoto <ryu.yamamoto@tier4.jp>")
set(tier4_pcl_extensions_BUILD_DEPENDS "autoware_cmake" "eigen" "range-v3" "libpcl-all-dev")
set(tier4_pcl_extensions_BUILDTOOL_DEPENDS "ament_cmake_auto" "eigen3_cmake_module")
set(tier4_pcl_extensions_BUILD_EXPORT_DEPENDS "eigen" "libpcl-all-dev")
set(tier4_pcl_extensions_BUILDTOOL_EXPORT_DEPENDS "eigen3_cmake_module")
set(tier4_pcl_extensions_EXEC_DEPENDS "libpcl-all-dev")
set(tier4_pcl_extensions_TEST_DEPENDS "ament_lint_auto" "autoware_lint_common")
set(tier4_pcl_extensions_GROUP_DEPENDS )
set(tier4_pcl_extensions_MEMBER_OF_GROUPS )
set(tier4_pcl_extensions_DEPRECATED "")
set(tier4_pcl_extensions_EXPORT_TAGS)
list(APPEND tier4_pcl_extensions_EXPORT_TAGS "<build_type>ament_cmake</build_type>")