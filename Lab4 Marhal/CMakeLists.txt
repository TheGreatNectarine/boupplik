cmake_minimum_required(VERSION 3.8)
project(Lab4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp agm.h practice.h practice.cpp)
add_executable(Lab4 ${SOURCE_FILES})