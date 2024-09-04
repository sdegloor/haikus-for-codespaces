cmake_minimum_required(VERSION 3.5.0)

project(socket_programming)

include(CTest)
enable_testing()

add_executable(sock BaseSocketAPI.cpp ClientAPI.cpp ServerAPI.cpp PlayerBase.cpp Main.cpp)

TARGET_LINK_LIBRARIES(sock pthread)
