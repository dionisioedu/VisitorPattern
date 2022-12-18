cmake_minimum_required(VERSION 3.10)
set(Name Visitor)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(${Name})

set(Headers Shape.h Circle.h Rectangle.h Triangle.h AreaVisitor.h ShapesVisitors.h)
set(Sources main.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Visitor main.cpp)