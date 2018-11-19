cmake_minimum_required (VERSION 3.0.1)

project (lab01)

add_executable(lab01
    Iloczyn.cpp
    InicjalizujCiagGeometryczny.cpp
    lab01.cpp
    Max.cpp
    Min.cpp
    Suma.cpp
    UsunCiagi.cpp
    WykonaIWypisz.cpp
    Wypisz.cpp
)

add_compile_options(-Wall -g)