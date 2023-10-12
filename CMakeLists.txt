cmake_minimum_required(VERSION 3.16)

project(hello-world VERSION 1.0 LANGUAGES CXX C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON) 
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSIONS OFF)

# should fix some issues when combining static and shared parts
if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message("enabling shared libraries on linux")
    option(BUILD_SHARED "build shared libraries" ON)
else()
    option(BUILD_SHARED "build shared libraries" OFF)
endif()

if (BUILD_SHARED)
    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION FALSE) # IPO caused some issues on windows 

add_subdirectory(src)