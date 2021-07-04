//
// Created by jfarfan on 4/07/2021.
//

#ifndef SEM12_POLIMORFISMO_ABSTRACTASTRO_H
#define SEM12_POLIMORFISMO_ABSTRACTASTRO_H

#include "Tipos.h"

class AbstractAstro {
public:
    virtual ~AbstractAstro() = default;
    virtual entero identificador() = 0;
    virtual real size()=0;
    virtual void dibujar()=0;
};

#endif //SEM12_POLIMORFISMO_ABSTRACTASTRO_H
