//
// Created by jfarfan on 4/07/2021.
//

#ifndef SEM12_POLIMORFISMO_ASTRO_H
#define SEM12_POLIMORFISMO_ASTRO_H


#include "AbstractAstro.h"
#include "Tipos.h"

class Astro:public AbstractAstro {
protected:
    entero area;
public:
    Astro(){}
    entero identificador() override ;
    real size() override ;
    void dibujar() override ;
};



#endif //SEM12_POLIMORFISMO_ASTRO_H
