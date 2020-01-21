cmake_minimum_required(VERSION 3.10)
project(lab_5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp common.h common.cpp linked_list.h)
add_executable(lab_5 ${SOURCE_FILES})