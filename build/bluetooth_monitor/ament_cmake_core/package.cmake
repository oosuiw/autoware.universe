set(_AMENT_PACKAGE_NAME "bluetooth_monitor")
set(bluetooth_monitor_VERSION "0.1.0")
set(bluetooth_monitor_MAINTAINER "Fumihito Ito <fumihito.ito@tier4.jp>")
set(bluetooth_monitor_BUILD_DEPENDS "autoware_cmake" "libboost-serialization-dev" "diagnostic_msgs" "diagnostic_updater" "fmt" "libboost-dev" "rclcpp" "rclcpp_components")
set(bluetooth_monitor_BUILDTOOL_DEPENDS "ament_cmake_auto")
set(bluetooth_monitor_BUILD_EXPORT_DEPENDS "diagnostic_msgs" "diagnostic_updater" "fmt" "libboost-dev" "rclcpp" "rclcpp_components")
set(bluetooth_monitor_BUILDTOOL_EXPORT_DEPENDS )
set(bluetooth_monitor_EXEC_DEPENDS "bluez" "diagnostic_msgs" "diagnostic_updater" "fmt" "libboost-dev" "rclcpp" "rclcpp_components")
set(bluetooth_monitor_TEST_DEPENDS "ament_lint_auto" "autoware_lint_common")
set(bluetooth_monitor_GROUP_DEPENDS )
set(bluetooth_monitor_MEMBER_OF_GROUPS )
set(bluetooth_monitor_DEPRECATED "")
set(bluetooth_monitor_EXPORT_TAGS)
list(APPEND bluetooth_monitor_EXPORT_TAGS "<build_type>ament_cmake</build_type>")