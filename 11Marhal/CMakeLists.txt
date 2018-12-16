cmake_minimum_required(VERSION 3.8)
project(11Marhal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp functions.h functions.cpp tester.cpp test.h constants.h)
add_executable(11Marhal ${SOURCE_FILES})