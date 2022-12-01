//
// Created by Dani on 12/1/2022.
//

#ifndef OBSERVEROPERATIONS_MULTIPLY_H
#define OBSERVEROPERATIONS_MULTIPLY_H

#include <iostream>
#include "Subject.h"

class Multiply: public IObserver{
public:
    Multiply(Subject *mod): IObserver(mod){}
    void update() override{
        std::cout << model->getFirst() << " * "<< model->getSecond() << " = "<< model->getFirst() * model->getSecond() << std::endl;
    }

};

#endif //OBSERVEROPERATIONS_MULTIPLY_H
