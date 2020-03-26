cmake_minimum_required(VERSION 3.15)
project(Laborator3)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Laborator3
        src/CMakeLists.txt
        src/Knoten.cpp
        src/Knoten.h
        src/Suchbaum.cpp
        src/Suchbaum.h
        CMakeLists.txt
        main.cpp)
