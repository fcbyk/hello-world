cmake_minimum_required(VERSION 3.28)
project(cpp)

set(CMAKE_CXX_STANDARD 26)

add_executable(cpp
        grammar/template.cpp
        api/stl/index.cpp
        grammar/function.cpp
        grammar/internal.cpp
        grammar/oop.cpp)
