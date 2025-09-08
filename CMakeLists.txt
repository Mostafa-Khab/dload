cmake_minimum_required(VERSION 4.0)
project(CPP_DLL)

add_library(plug SHARED src/plug.cpp)
add_executable(main main.cpp)
