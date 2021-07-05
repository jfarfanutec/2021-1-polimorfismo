//
// Created by jfarfan on 4/07/2021.
//

#include "Alumno.h"

Alumno& Alumno::operator+=(Alumno alu){
    this->edad+=alu.getEdad();
    return *this;
}