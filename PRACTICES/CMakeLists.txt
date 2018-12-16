cmake_minimum_required(VERSION 3.8)
project(PRACTICES)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp practice.h practice.cpp week7.cpp complex_matrix.h complex_matrix.cpp)
add_executable(PRACTICES ${SOURCE_FILES})