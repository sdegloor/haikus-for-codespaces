cmake_minimum_required(VERSION 3.5.0)

project(hello)

include(CTest)
enable_testing()

add_executable(hello q.cpp)
