cmake_minimum_required(VERSION 3.6)
project(lab_4)

set(CMAKE_CXX_STANDARD 11)

add_executable(lab_4 main.cpp figure.h figure.cpp point.h point.cpp circle.h
        circle.cpp rectangle.h rectangle.cpp square.h square.cpp)