cmake_minimum_required(VERSION 3.19)
project(polimorfismo_tipos)

set(CMAKE_CXX_STANDARD 14)

add_executable(polimorfismo_tipos main.cpp Tipos.h AbstractPoligono.h Poligono.cpp Poligono.h Triangulo.cpp Triangulo.h Paralelograma.cpp Paralelograma.h Elipse.cpp Elipse.h)