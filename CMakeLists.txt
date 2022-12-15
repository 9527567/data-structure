cmake_minimum_required(VERSION 3.5)
project(data_structure)
include_directories(include)
set(SOURCE src)
set(CMAKE_CXX_STANDARD 17)
add_executable(main
        main.cpp
        ${SOURCE})