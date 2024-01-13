cmake_minimum_required(VERSION 3.22)
project(week12_vr)

set(CMAKE_CXX_STANDARD 17)

add_executable(week12_vr main.cpp
        Student.cpp
        Student.h
        Cursus.cpp
        Cursus.h
        Professor.cpp
        Professor.h
        Persoon.cpp
        Persoon.h
        Assistent.cpp
        Assistent.h
        Lesgever.cpp
        Lesgever.h)
