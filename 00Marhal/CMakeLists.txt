cmake_minimum_required(VERSION 3.8)
project(00Marhal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp functions.h sum.cpp sine.cpp modulo.cpp gcd.cpp Chebyshev.cpp helpers.h helpers.cpp)
add_executable(00Marhal ${SOURCE_FILES})