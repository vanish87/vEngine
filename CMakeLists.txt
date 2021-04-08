# cmake minium version required
cmake_minimum_required(VERSION 3.13)

# project name
project(vEngine)

# c++ setting
set(CMAKE_CXX_STANDARD 11)

# compile main.cpp as exe
add_executable(vEngine Source/main.cpp)
