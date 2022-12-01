//
// Created by Dani on 12/1/2022.
//

#ifndef OBSERVEROPERATIONS_MODULO_H
#define OBSERVEROPERATIONS_MODULO_H

#include <iostream>
#include "Subject.h"

class Modulo: public IObserver{
public:
    Modulo(Subject *mod): IObserver(mod){}
    void update() override{
        std::cout << model->getFirst() << " % "<< model->getSecond() << " = "<< model->getFirst() % model->getSecond() << std::endl;
    }

};

#endif //OBSERVEROPERATIONS_MODULO_H
