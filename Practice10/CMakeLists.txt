cmake_minimum_required(VERSION 3.8)
project(Practice10)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp points.h point.cpp Parameters.cpp)
add_executable(Practice10 ${SOURCE_FILES})