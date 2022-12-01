//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_SHAPEFACTORY_H
#define FACTORYSHAPE_SHAPEFACTORY_H
#include "memory"
#include "Shape.h"


class ShapeFactory {
public:
    static std::shared_ptr<Shape> createShape(int side, int nrOfSide);
};


#endif //FACTORYSHAPE_SHAPEFACTORY_H
