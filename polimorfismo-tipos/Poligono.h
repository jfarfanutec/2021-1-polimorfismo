//
// Created by jfarfan on 4/07/2021.
//
#include "AbstractPoligono.h"

#ifndef POLIMORFISMO_TIPOS_POLIGONO_H
#define POLIMORFISMO_TIPOS_POLIGONO_H


class Poligono: public AbstractPoligono {

public:
    Poligono(){};
    Number calcularArea() override;
    void dibujar() const override;
};


#endif //POLIMORFISMO_TIPOS_POLIGONO_H
