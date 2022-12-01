cmake_minimum_required(VERSION 3.23)
project(ObserverOperations)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObserverOperations main.cpp Subject.cpp Subject.h Add.h Multiply.h Modulo.h)
