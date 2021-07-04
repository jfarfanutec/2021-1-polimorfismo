//
// Created by jfarfan on 4/07/2021.
//

#ifndef SEM12_POLIMORFISMO_ESTRELLA_H
#define SEM12_POLIMORFISMO_ESTRELLA_H

#include "Tipos.h"
#include "Astro.h"
class Estrella: public Astro {
public:
    Estrella(){}
    entero identificador() override ;
    real size() override ;
    void dibujar() override ;
};


#endif //SEM12_POLIMORFISMO_ESTRELLA_H
