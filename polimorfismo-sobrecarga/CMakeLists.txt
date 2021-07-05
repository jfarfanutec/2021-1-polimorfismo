cmake_minimum_required(VERSION 3.19)
project(polimorfismo_sobrecarga)

set(CMAKE_CXX_STANDARD 14)

add_executable(polimorfismo_sobrecarga main.cpp tipos.h funciones.cpp funciones.h Alumno.cpp Alumno.h)