//
// Created by jfarfan on 4/07/2021.
//
#include "Tipos.h"
#ifndef POLIMORFISMO_TIPOS_ABSTRACTPOLIGONO_H
#define POLIMORFISMO_TIPOS_ABSTRACTPOLIGONO_H

class AbstractPoligono {
public:
    virtual ~AbstractPoligono() {};
    virtual Number calcularArea() = 0;
    virtual void dibujar() const = 0;
};

#endif //POLIMORFISMO_TIPOS_ABSTRACTPOLIGONO_H
