cmake_minimum_required(VERSION 3.5)

project(linked_queue_project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(linked_queue_project main.cpp)
