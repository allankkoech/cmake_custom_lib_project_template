cmake_minimum_required(VERSION 3.4)

project(koi)

add_subdirectory(src)

add_subdirectory(include)

option(BUILD_EXAMPLES "Build examples in the project" ON)

if (BUILD_EXAMPLES)
    message("Building examples ...")
    add_subdirectory(examples)
endif()