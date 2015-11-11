cmake_minimum_required(VERSION 3.3)
project(UdemyLearningApp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Person.cpp Person.h)
add_executable(UdemyLearningApp ${SOURCE_FILES})