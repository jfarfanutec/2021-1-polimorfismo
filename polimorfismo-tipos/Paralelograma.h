//
// Created by jfarfan on 4/07/2021.
//

#ifndef POLIMORFISMO_TIPOS_PARALELOGRAMA_H
#define POLIMORFISMO_TIPOS_PARALELOGRAMA_H


#include "Poligono.h"

class Paralelograma: public Poligono {
    Number base;
    Number altura;
public:
    Paralelograma(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};


#endif //POLIMORFISMO_TIPOS_PARALELOGRAMA_H
