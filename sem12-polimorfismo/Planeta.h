//
// Created by jfarfan on 4/07/2021.
//

#ifndef SEM12_POLIMORFISMO_PLANETA_H
#define SEM12_POLIMORFISMO_PLANETA_H


#include "Tipos.h"
#include "Astro.h"

class Planeta: public Astro {
public:
    Planeta(){}
    entero identificador() override ;
    real size() override ;
    void dibujar() override ;
};

#endif //SEM12_POLIMORFISMO_PLANETA_H
