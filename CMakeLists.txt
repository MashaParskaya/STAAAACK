cmake_minimum_required(VERSION 2.8)

project(STACK)

set(STACK_src main.cpp stack.cpp autotest.cpp)
set(STACK_hdr stack.hpp autotest.hpp)

add_executable(${PROJECT_NAME} ${STACK_src} ${STACK_hdr})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")
