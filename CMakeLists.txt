cmake_minimum_required(VERSION 3.6)
project(sha1cracker)

find_package(OpenMP REQUIRED)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD 11)

## Compiler flags
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-O2")        ## Optimize
    set(CMAKE_EXE_LINKER_FLAGS "-s")  ## Strip binary
endif()

add_executable(sha1cracker tester.cpp crypto/sha1.hpp crypto/sha1.cpp Utility.cpp Utility.h defs.h)
target_link_libraries(sha1cracker ${OpenMP_CXX_FLAGS})
