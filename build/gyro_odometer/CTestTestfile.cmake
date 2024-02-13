# CMake generated Testfile for 
# Source directory: /home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer
# Build directory: /home/sws/autoware/build/gyro_odometer
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_gyro_odometer "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_ros/cmake/run_test_isolated.py" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/test_gyro_odometer.gtest.xml" "--package-name" "gyro_odometer" "--output-file" "/home/sws/autoware/build/gyro_odometer/ament_cmake_gtest/test_gyro_odometer.txt" "--command" "/home/sws/autoware/build/gyro_odometer/test_gyro_odometer" "--gtest_output=xml:/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/test_gyro_odometer.gtest.xml")
set_tests_properties(test_gyro_odometer PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/sws/autoware/build/gyro_odometer/test_gyro_odometer" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/build/gyro_odometer" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/opt/ros/humble/share/ament_cmake_ros/cmake/ament_add_ros_isolated_gtest.cmake;33;ament_add_gtest;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;19;ament_add_ros_isolated_gtest;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/copyright.xunit.xml" "--package-name" "gyro_odometer" "--output-file" "/home/sws/autoware/build/gyro_odometer/ament_copyright/copyright.txt" "--command" "/opt/ros/humble/bin/ament_copyright" "--xunit-file" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;33;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/cppcheck.xunit.xml" "--package-name" "gyro_odometer" "--output-file" "/home/sws/autoware/build/gyro_odometer/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/cppcheck.xunit.xml" "--include_dirs" "/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;33;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/lint_cmake.xunit.xml" "--package-name" "gyro_odometer" "--output-file" "/home/sws/autoware/build/gyro_odometer/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;33;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/xmllint.xunit.xml" "--package-name" "gyro_odometer" "--output-file" "/home/sws/autoware/build/gyro_odometer/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/sws/autoware/build/gyro_odometer/test_results/gyro_odometer/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;33;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/localization/gyro_odometer/CMakeLists.txt;0;")
subdirs("gtest")
