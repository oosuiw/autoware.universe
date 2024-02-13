# CMake generated Testfile for 
# Source directory: /home/sws/autoware/src/universe/autoware.universe/map/map_loader
# Build directory: /home/sws/autoware/build/map_loader
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_lanelet2_map_loader_launch.test.py "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/test_lanelet2_map_loader_launch.test.py.xunit.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ros_test/test_lanelet2_map_loader_launch.test.py.txt" "--command" "ros2" "test" "/home/sws/autoware/src/universe/autoware.universe/map/map_loader/test/lanelet2_map_loader_launch.test.py" "--junit-xml=/home/sws/autoware/build/map_loader/test_results/map_loader/test_lanelet2_map_loader_launch.test.py.xunit.xml" "--package-name=map_loader")
set_tests_properties(test_lanelet2_map_loader_launch.test.py PROPERTIES  TIMEOUT "30" WORKING_DIRECTORY "/home/sws/autoware/build/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ros_testing/cmake/add_ros_test.cmake;73;ament_add_test;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;47;add_ros_test;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(test_sphere_box_overlap "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/test_sphere_box_overlap.gtest.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_cmake_gmock/test_sphere_box_overlap.txt" "--command" "/home/sws/autoware/build/map_loader/test_sphere_box_overlap" "--gtest_output=xml:/home/sws/autoware/build/map_loader/test_results/map_loader/test_sphere_box_overlap.gtest.xml")
set_tests_properties(test_sphere_box_overlap PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/sws/autoware/build/map_loader/test_sphere_box_overlap" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/build/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;59;ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;67;add_testcase;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(test_pointcloud_map_loader_module "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/test_pointcloud_map_loader_module.gtest.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_cmake_gmock/test_pointcloud_map_loader_module.txt" "--command" "/home/sws/autoware/build/map_loader/test_pointcloud_map_loader_module" "--gtest_output=xml:/home/sws/autoware/build/map_loader/test_results/map_loader/test_pointcloud_map_loader_module.gtest.xml")
set_tests_properties(test_pointcloud_map_loader_module PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/sws/autoware/build/map_loader/test_pointcloud_map_loader_module" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/build/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;59;ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;68;add_testcase;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(test_partial_map_loader_module "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/test_partial_map_loader_module.gtest.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_cmake_gmock/test_partial_map_loader_module.txt" "--command" "/home/sws/autoware/build/map_loader/test_partial_map_loader_module" "--gtest_output=xml:/home/sws/autoware/build/map_loader/test_results/map_loader/test_partial_map_loader_module.gtest.xml")
set_tests_properties(test_partial_map_loader_module PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/sws/autoware/build/map_loader/test_partial_map_loader_module" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/build/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;59;ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;69;add_testcase;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(test_differential_map_loader_module "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/test_differential_map_loader_module.gtest.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_cmake_gmock/test_differential_map_loader_module.txt" "--command" "/home/sws/autoware/build/map_loader/test_differential_map_loader_module" "--gtest_output=xml:/home/sws/autoware/build/map_loader/test_results/map_loader/test_differential_map_loader_module.gtest.xml")
set_tests_properties(test_differential_map_loader_module PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/sws/autoware/build/map_loader/test_differential_map_loader_module" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/build/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;59;ament_add_gmock;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;70;add_testcase;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/copyright.xunit.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_copyright/copyright.txt" "--command" "/opt/ros/humble/bin/ament_copyright" "--xunit-file" "/home/sws/autoware/build/map_loader/test_results/map_loader/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/map/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;78;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/cppcheck.xunit.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/sws/autoware/build/map_loader/test_results/map_loader/cppcheck.xunit.xml" "--include_dirs" "/home/sws/autoware/src/universe/autoware.universe/map/map_loader/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/map/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;78;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/lint_cmake.xunit.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/sws/autoware/build/map_loader/test_results/map_loader/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/map/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;78;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/sws/autoware/build/map_loader/test_results/map_loader/xmllint.xunit.xml" "--package-name" "map_loader" "--output-file" "/home/sws/autoware/build/map_loader/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/sws/autoware/build/map_loader/test_results/map_loader/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/sws/autoware/src/universe/autoware.universe/map/map_loader" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;78;ament_auto_package;/home/sws/autoware/src/universe/autoware.universe/map/map_loader/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
