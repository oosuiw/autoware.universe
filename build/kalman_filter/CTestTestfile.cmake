# CMake generated Testfile for 
# Source directory: /home/sws/autoware/src/universe/autoware.universe/common/kalman_filter
# Build directory: /home/sws/autoware/build/kalman_filter
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/kalman_filter/test_results/kalman_filter/cppcheck.xunit.xml" "--package-name" "kalman_filter" "--output-file" "/home/sws/autoware/build/kalman_filter/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/sws/autoware/build/kalman_filter/test_results/kalman_filter/cppcheck.xunit.xml" "--include_dirs" "/home/sws/autoware/src/universe/autoware.universe/common/kalman_filter/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/common/kalman_filter" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/common/kalman_filter/CMakeLists.txt;22;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/common/kalman_filter/CMakeLists.txt;0;")