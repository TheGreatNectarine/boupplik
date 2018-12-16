 cmake_minimum_required(VERSION 3.8)
project(MarhalLab6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp sorting.h sorting.cpp)
add_executable(MarhalLab6 ${SOURCE_FILES})