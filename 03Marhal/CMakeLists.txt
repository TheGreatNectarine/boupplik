cmake_minimum_required(VERSION 3.8)
project(Lab03)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp shift.cpp shift.h shift.cpp functions.h gaussian.cpp exponent.cpp)
add_executable(Lab03 ${SOURCE_FILES})