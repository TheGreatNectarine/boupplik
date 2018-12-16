cmake_minimum_required(VERSION 3.8)
project(01Marhal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp functions.h exponent.cpp cosinus.cpp arctan.cpp helpers.h helpers.cpp)
add_executable(01Marhal ${SOURCE_FILES})