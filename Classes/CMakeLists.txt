cmake_minimum_required(VERSION 3.3)
project(Classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Cat.cpp Cat.h)
add_executable(Classes ${SOURCE_FILES})