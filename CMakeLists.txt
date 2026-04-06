cmake_minimum_required(VERSION 4.0)
project(fft)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)

add_executable(fft
        fft.cpp
        fft.h
        main.cpp)

add_subdirectory(matplotplusplus)
target_link_libraries(fft PUBLIC matplot)

