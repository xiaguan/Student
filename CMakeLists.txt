cmake_minimum_required(VERSION 3.20)
project(TEST)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST main.cpp Student.cpp Student.h jsonfile.cpp jsonfile.h)
