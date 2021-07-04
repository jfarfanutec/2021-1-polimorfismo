//
// Created by jfarfan on 4/07/2021.
//

#ifndef POLIMORFISMO_TIPOS_ELIPSE_H
#define POLIMORFISMO_TIPOS_ELIPSE_H


#include "Poligono.h"

class Elipse: public Poligono {
    Number ejeMayor;
    Number ejeMenor;
public:
    Elipse(Number ejeMayor, Number ejeMenor);
    Number calcularArea() override;
    void dibujar() const override;
};


#endif //POLIMORFISMO_TIPOS_ELIPSE_H
