cmake_minimum_required(VERSION 3.22)
project(week13_vr)

set(CMAKE_CXX_STANDARD 17)

add_executable(week13_vr
        main.cpp
        #Netflix.h
        #GeoGebra/main.cpp
        GeoGebra/Functie.cpp
        GeoGebra/Functie.h
        GeoGebra/Geogebra.cpp
        GeoGebra/Geogebra.h
        GeoGebra/GoniometrischeFunctie.cpp
        GeoGebra/GoniometrischeFunctie.h
        GeoGebra/RationaleFunctie.cpp
        GeoGebra/RationaleFunctie.h
        GeoGebra/VeeltermFunctie.cpp
        GeoGebra/VeeltermFunctie.h
        GeoGebra/Sinus.h
        GeoGebra/Sinus.cpp
        GeoGebra/Cosinus.cpp
        GeoGebra/Cosinus.h
)
