//
// Created by jfarfan on 4/07/2021.
//

#ifndef SEM12_POLIMORFISMO_COMETA_H
#define SEM12_POLIMORFISMO_COMETA_H

#include "Tipos.h"
#include "Astro.h"

class Cometa: public Astro{
public:
    Cometa(){}

    entero identificador() override ;
    real size() override ;
    void dibujar() override ;
};


#endif //SEM12_POLIMORFISMO_COMETA_H
