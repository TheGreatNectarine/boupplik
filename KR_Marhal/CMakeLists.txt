cmake_minimum_required(VERSION 3.8)
project(KR_Marhal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp assignment_9-10.h structures.h assignment_1-5.h assignment_6-8.h assignment_1-5.cpp assignment_6-8.cpp assignment_9-10.cpp test.h test.cpp DIMASICK/main.cpp DIMASICK/functions.h DIMASICK/functions.cpp functions.h functions.h)
add_executable(KR_Marhal ${SOURCE_FILES})