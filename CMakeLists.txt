cmake_minimum_required(VERSION 3.14)
project(PasswordGenerator)

set(CMAKE_CXX_STANDARD 17)

add_executable(password main.cpp StringHash.cpp StringHash.hpp)
