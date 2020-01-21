cmake_minimum_required(VERSION 3.6)
project(lab_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp hockshop.h hockshop.cpp vehicle.h vehicle.cpp)
add_executable(lab_3 ${SOURCE_FILES})