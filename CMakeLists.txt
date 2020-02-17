cmake_minimum_required(VERSION 3.15)
project(temperatura)

set(CMAKE_CXX_STANDARD 14)

add_executable(temperatura main.cpp Temperature.cpp Temperature.h)
