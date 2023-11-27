cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled cmake-build-debug/main.cpp
        "cmake-build-debug/Problem 1.cpp"
        "cmake-build-debug/Problem 1.h")
