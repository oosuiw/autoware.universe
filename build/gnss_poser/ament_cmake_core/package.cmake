set(_AMENT_PACKAGE_NAME "gnss_poser")
set(gnss_poser_VERSION "1.0.0")
set(gnss_poser_MAINTAINER "Yamato Ando <yamato.ando@tier4.jp>")
set(gnss_poser_BUILD_DEPENDS "autoware_cmake" "libboost-dev" "autoware_sensing_msgs" "geo_pos_conv" "geographiclib" "geometry_msgs" "rclcpp" "rclcpp_components" "sensor_msgs" "tf2" "tf2_geometry_msgs" "tf2_ros" "tier4_debug_msgs")
set(gnss_poser_BUILDTOOL_DEPENDS "ament_cmake_auto")
set(gnss_poser_BUILD_EXPORT_DEPENDS "autoware_sensing_msgs" "geo_pos_conv" "geographiclib" "geometry_msgs" "rclcpp" "rclcpp_components" "sensor_msgs" "tf2" "tf2_geometry_msgs" "tf2_ros" "tier4_debug_msgs")
set(gnss_poser_BUILDTOOL_EXPORT_DEPENDS )
set(gnss_poser_EXEC_DEPENDS "autoware_sensing_msgs" "geo_pos_conv" "geographiclib" "geometry_msgs" "rclcpp" "rclcpp_components" "sensor_msgs" "tf2" "tf2_geometry_msgs" "tf2_ros" "tier4_debug_msgs")
set(gnss_poser_TEST_DEPENDS "ament_lint_auto" "autoware_lint_common")
set(gnss_poser_GROUP_DEPENDS )
set(gnss_poser_MEMBER_OF_GROUPS )
set(gnss_poser_DEPRECATED "")
set(gnss_poser_EXPORT_TAGS)
list(APPEND gnss_poser_EXPORT_TAGS "<build_type>ament_cmake</build_type>")