
if(NOT "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-subbuild/tensorrt-populate-prefix/src/tensorrt-populate-stamp/tensorrt-populate-gitinfo.txt" IS_NEWER_THAN "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-subbuild/tensorrt-populate-prefix/src/tensorrt-populate-stamp/tensorrt-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-subbuild/tensorrt-populate-prefix/src/tensorrt-populate-stamp/tensorrt-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/NVIDIA/TensorRT" "tensorrt-src"
    WORKING_DIRECTORY "/home/sws/autoware/build/trtexec_vendor/_deps"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/NVIDIA/TensorRT'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 8.4.1 --
  WORKING_DIRECTORY "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '8.4.1'")
endif()

set(init_submodules FALSE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-subbuild/tensorrt-populate-prefix/src/tensorrt-populate-stamp/tensorrt-populate-gitinfo.txt"
    "/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-subbuild/tensorrt-populate-prefix/src/tensorrt-populate-stamp/tensorrt-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/sws/autoware/build/trtexec_vendor/_deps/tensorrt-subbuild/tensorrt-populate-prefix/src/tensorrt-populate-stamp/tensorrt-populate-gitclone-lastrun.txt'")
endif()

