cmake_minimum_required(VERSION 3.5)

project(Cpp20)

add_compile_options(-Wall -Wextra -Wpedantic)

set (CMAKE_CXX_COMPILER "/usr/bin/clang++")
set (CMAKE_CXX_FLAGS -std=c++20)

add_subdirectory(ch1)
add_subdirectory(ch2)