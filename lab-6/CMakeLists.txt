cmake_minimum_required(VERSION 3.10)
project(lab_6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp animal.cpp animal.h)
add_executable(lab_6 ${SOURCE_FILES})