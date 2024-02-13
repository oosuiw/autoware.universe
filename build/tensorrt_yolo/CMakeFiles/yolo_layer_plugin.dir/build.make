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
CMAKE_SOURCE_DIR = /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sws/autoware/build/tensorrt_yolo

# Include any dependencies generated for this target.
include CMakeFiles/yolo_layer_plugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/yolo_layer_plugin.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/yolo_layer_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/yolo_layer_plugin.dir/flags.make

CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o: CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o.depend
CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o: CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o.Release.cmake
CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o: /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo/lib/src/plugins/yolo_layer.cu
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sws/autoware/build/tensorrt_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building NVCC (Device) object CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o"
	cd /home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins && /usr/bin/cmake -E make_directory /home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/.
	cd /home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins && /usr/bin/cmake -D verbose:BOOL=$(VERBOSE) -D build_configuration:STRING=Release -D generated_file:STRING=/home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/./yolo_layer_plugin_generated_yolo_layer.cu.o -D generated_cubin_file:STRING=/home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/./yolo_layer_plugin_generated_yolo_layer.cu.o.cubin.txt -P /home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o.Release.cmake

CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o: CMakeFiles/yolo_layer_plugin.dir/flags.make
CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o: /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo/lib/src/plugins/yolo_layer_plugin.cpp
CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o: CMakeFiles/yolo_layer_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sws/autoware/build/tensorrt_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o -MF CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o.d -o CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o -c /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo/lib/src/plugins/yolo_layer_plugin.cpp

CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo/lib/src/plugins/yolo_layer_plugin.cpp > CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.i

CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo/lib/src/plugins/yolo_layer_plugin.cpp -o CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.s

# Object files for target yolo_layer_plugin
yolo_layer_plugin_OBJECTS = \
"CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o"

# External object files for target yolo_layer_plugin
yolo_layer_plugin_EXTERNAL_OBJECTS = \
"/home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o"

libyolo_layer_plugin.so: CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin.cpp.o
libyolo_layer_plugin.so: CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o
libyolo_layer_plugin.so: CMakeFiles/yolo_layer_plugin.dir/build.make
libyolo_layer_plugin.so: /usr/local/cuda/lib64/libcudart_static.a
libyolo_layer_plugin.so: /usr/lib/x86_64-linux-gnu/librt.a
libyolo_layer_plugin.so: CMakeFiles/yolo_layer_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sws/autoware/build/tensorrt_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libyolo_layer_plugin.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yolo_layer_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/yolo_layer_plugin.dir/build: libyolo_layer_plugin.so
.PHONY : CMakeFiles/yolo_layer_plugin.dir/build

CMakeFiles/yolo_layer_plugin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/yolo_layer_plugin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/yolo_layer_plugin.dir/clean

CMakeFiles/yolo_layer_plugin.dir/depend: CMakeFiles/yolo_layer_plugin.dir/lib/src/plugins/yolo_layer_plugin_generated_yolo_layer.cu.o
	cd /home/sws/autoware/build/tensorrt_yolo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo /home/sws/autoware/src/universe/autoware.universe/perception/tensorrt_yolo /home/sws/autoware/build/tensorrt_yolo /home/sws/autoware/build/tensorrt_yolo /home/sws/autoware/build/tensorrt_yolo/CMakeFiles/yolo_layer_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/yolo_layer_plugin.dir/depend

