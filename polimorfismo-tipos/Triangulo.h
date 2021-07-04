//
// Created by jfarfan on 4/07/2021.
//

#ifndef POLIMORFISMO_TIPOS_TRIANGULO_H
#define POLIMORFISMO_TIPOS_TRIANGULO_H


#include "Poligono.h"

class Triangulo: public Poligono {
    Number base;
    Number altura;
public:
    Triangulo(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};


#endif //POLIMORFISMO_TIPOS_TRIANGULO_H
