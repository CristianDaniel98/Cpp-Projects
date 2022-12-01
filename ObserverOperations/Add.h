//
// Created by Dani on 12/1/2022.
//

#ifndef OBSERVEROPERATIONS_ADD_H
#define OBSERVEROPERATIONS_ADD_H

#include <iostream>
#include "Subject.h"

class Add: public IObserver{
public:
    Add(Subject *mod): IObserver(mod){}
    void update() override{
        std::cout << model->getFirst() << " + "<< model->getSecond() << " = "<< model->getFirst() + model->getSecond() << std::endl;
    }

};

#endif //OBSERVEROPERATIONS_ADD_H
