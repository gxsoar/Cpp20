cmake_minimum_required(VERSION 3.5)

project(ch1)

add_compile_options(-Wall -Wextra -Wpedantic)

set (CMAKE_CXX_COMPLIER "/usr/bin/clang")
set (CMAKE_CXX_FLAGS -std=c++20)

find_package(fmt)

set(SOURCES ch1/src/example/hello_world.cpp)
set(SOURCES ch1/src/example/three-way-comparisons)
set(SOURCES ch1/src/example/get_function_name)
set(SOURCES ch1/src/example/attribute)
set(SOURCES ch1/src/example/optional)
set(SOURCES ch1/src/example/structured_bindings)
set(SOURCES ch1/src/example/initliazer_range_loop)
set(SOURCES ch1/src/example/designated_initializers)
set(SOURCES ch1/src/example/consteval)

add_executable(hello_world ${SOURCES})
add_executable(three-way-comparsions ${SOURCES})
add_executable(get_function_name ${SOURCES})
add_executable(attribute ${SOURCES})
add_executable(optional ${SOURCES})
add_executable(structured_bindings ${SOURCES})
add_executable(initliazer_range_loop ${SOURCES})
add_executable(designated_initializers ${SOURCES})
add_executable(consteval ${SOURCES})
target_link_libraries(get_function_name PRIVATE fmt::fmt)
