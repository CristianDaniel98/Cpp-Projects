cmake_minimum_required(VERSION 3.23)
project(FactoryShape)

set(CMAKE_CXX_STANDARD 17)

add_executable(FactoryShape main.cpp Shape.h Triangle.cpp Hexagon.cpp Square.cpp ShapeFactory.cpp ShapeFactory.h Triangle.h Square.h Hexagon.h Shape.h Pentagon.cpp Pentagon.h Octogon.cpp Octogon.h)
