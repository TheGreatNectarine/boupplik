cmake_minimum_required(VERSION 3.8)
project(Lab5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp polynomial.h polynomial.cpp)
add_executable(Lab5 ${SOURCE_FILES})