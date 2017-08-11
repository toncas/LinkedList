cmake_minimum_required(VERSION 3.8)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Source/main.cpp Source/LinkedList.cpp Headers/LinkedList.h Source/Utilities.cpp Headers/Utilities.h)
add_executable(LinkedList ${SOURCE_FILES})