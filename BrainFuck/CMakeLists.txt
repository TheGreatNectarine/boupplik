cmake_minimum_required(VERSION 3.8)
project(BrainFuck)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Brainfuck.cpp Brainfuck.h programs_bf.h)
add_executable(BrainFuck ${SOURCE_FILES})