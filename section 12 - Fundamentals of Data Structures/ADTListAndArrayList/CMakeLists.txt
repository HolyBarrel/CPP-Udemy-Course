cmake_minimum_required(VERSION 3.5)

project(lists_examples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(lists_examples main.cpp)
