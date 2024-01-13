cmake_minimum_required(VERSION 3.22)
project(voorbeeldexamen)

set(CMAKE_CXX_STANDARD 17)

add_executable(voorbeeldexamen main.cpp
                               Time.cpp
                               Time.h
                               Audiobestand.h
                               Audiobestand.cpp
        Mediaplayer.h
        Mediaplayer.cpp
)
