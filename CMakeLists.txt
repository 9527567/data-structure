cmake_minimum_required(VERSION 3.5)
project(data_structure)
include_directories(include)
set(SOURCE src)
add_executable(main
        main.cpp
        ${SOURCE})