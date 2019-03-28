cmake_minimum_required(VERSION 3.12)
project(hackathon_vaughan)

set(CMAKE_CXX_STANDARD 14)

add_executable(hackathon_vaughan main.cpp BaseStation.cpp BaseStation.h Person.cpp Person.h Tower.cpp Tower.h ReadFromFile.cpp ReadFromFile.h)