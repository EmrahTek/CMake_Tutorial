cmake_minimum_required(VERSION 3.10.0)
project(TestingCTest)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} main.cpp)