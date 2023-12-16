cmake_minimum_required(VERSION 3.26)
project(Projekt)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projekt main.cpp
        Book.cpp
        Book.h
        json.hpp
        LinkedList.cpp
        LinkedList.h
)

