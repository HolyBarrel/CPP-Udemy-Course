cmake_minimum_required(VERSION 3.5)

project(array_queue_app)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(array_queue_app main.cpp)
