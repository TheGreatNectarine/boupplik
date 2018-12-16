cmake_minimum_required(VERSION 3.8)
project(08Marhal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp power_rec.cpp fibonacci_rec.cpp power_rec.h ficonacci_rec.h matrix.cpp structures.h test.h)
add_executable(08Marhal ${SOURCE_FILES})