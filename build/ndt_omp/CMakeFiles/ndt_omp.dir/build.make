# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sws/autoware/src/universe/external/ndt_omp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sws/autoware/build/ndt_omp

# Include any dependencies generated for this target.
include CMakeFiles/ndt_omp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ndt_omp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ndt_omp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ndt_omp.dir/flags.make

CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o: CMakeFiles/ndt_omp.dir/flags.make
CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o: /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/voxel_grid_covariance_omp.cpp
CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o: CMakeFiles/ndt_omp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sws/autoware/build/ndt_omp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o -MF CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o.d -o CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o -c /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/voxel_grid_covariance_omp.cpp

CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/voxel_grid_covariance_omp.cpp > CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.i

CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/voxel_grid_covariance_omp.cpp -o CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.s

CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o: CMakeFiles/ndt_omp.dir/flags.make
CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o: /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/ndt_omp.cpp
CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o: CMakeFiles/ndt_omp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sws/autoware/build/ndt_omp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o -MF CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o.d -o CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o -c /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/ndt_omp.cpp

CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/ndt_omp.cpp > CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.i

CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/ndt_omp.cpp -o CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.s

CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o: CMakeFiles/ndt_omp.dir/flags.make
CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o: /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/gicp_omp.cpp
CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o: CMakeFiles/ndt_omp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sws/autoware/build/ndt_omp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o -MF CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o.d -o CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o -c /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/gicp_omp.cpp

CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/gicp_omp.cpp > CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.i

CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sws/autoware/src/universe/external/ndt_omp/src/pclomp/gicp_omp.cpp -o CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.s

# Object files for target ndt_omp
ndt_omp_OBJECTS = \
"CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o" \
"CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o" \
"CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o"

# External object files for target ndt_omp
ndt_omp_EXTERNAL_OBJECTS =

libndt_omp.so: CMakeFiles/ndt_omp.dir/src/pclomp/voxel_grid_covariance_omp.cpp.o
libndt_omp.so: CMakeFiles/ndt_omp.dir/src/pclomp/ndt_omp.cpp.o
libndt_omp.so: CMakeFiles/ndt_omp.dir/src/pclomp/gicp_omp.cpp.o
libndt_omp.so: CMakeFiles/ndt_omp.dir/build.make
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_apps.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_outofcore.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_people.so
libndt_omp.so: /usr/lib/libOpenNI.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libOpenNI2.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libflann_cpp.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_surface.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_keypoints.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_tracking.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_recognition.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_registration.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_stereo.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_segmentation.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_features.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_filters.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_ml.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_visualization.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_search.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_kdtree.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_io.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_octree.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpng.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libz.so
libndt_omp.so: /usr/lib/libOpenNI.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libOpenNI2.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkChartsCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkInteractionImage-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkIOGeometry-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkIOPLY-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkViewsCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQt-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkIOLegacy-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkIOCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkImagingSources-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkIOImage-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkImagingCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingUI-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkRenderingCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonColor-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersSources-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkFiltersCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonMisc-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonMath-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkkissfft-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libX11.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtkCommonCore-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libtbb.so.12.5
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libvtksys-9.1.so.9.1.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpcl_common.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.74.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.74.0
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libqhull_r.so.8.0.2
libndt_omp.so: /usr/lib/gcc/x86_64-linux-gnu/11/libgomp.so
libndt_omp.so: /usr/lib/x86_64-linux-gnu/libpthread.a
libndt_omp.so: CMakeFiles/ndt_omp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sws/autoware/build/ndt_omp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libndt_omp.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ndt_omp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ndt_omp.dir/build: libndt_omp.so
.PHONY : CMakeFiles/ndt_omp.dir/build

CMakeFiles/ndt_omp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ndt_omp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ndt_omp.dir/clean

CMakeFiles/ndt_omp.dir/depend:
	cd /home/sws/autoware/build/ndt_omp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sws/autoware/src/universe/external/ndt_omp /home/sws/autoware/src/universe/external/ndt_omp /home/sws/autoware/build/ndt_omp /home/sws/autoware/build/ndt_omp /home/sws/autoware/build/ndt_omp/CMakeFiles/ndt_omp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ndt_omp.dir/depend

