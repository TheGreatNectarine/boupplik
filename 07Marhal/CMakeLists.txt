cmake_minimum_required(VERSION 3.8)
project(07Marhal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        matrix.cpp
        structures.h
        test.h practice.cpp)

add_executable(07Marhal ${SOURCE_FILES})