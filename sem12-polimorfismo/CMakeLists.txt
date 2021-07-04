cmake_minimum_required(VERSION 3.19)
project(sem12_polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(sem12_polimorfismo main.cpp Tipos.h Planeta.cpp Planeta.h Astro.cpp Astro.h AbstractAstro.h Cometa.cpp Cometa.h Estrella.cpp Estrella.h)