//
// Created by Dani on 11/30/2022.
//

#include "ShapeFactory.h"
#include "Triangle.h"
#include "Square.h"
#include "Hexagon.h"
#include "Pentagon.h"
#include "Octogon.h"

std::shared_ptr<Shape> ShapeFactory::createShape(int side, int nrOfSide) {
    switch(nrOfSide){
        case 3:
            return std::make_shared<Triangle>(side);
        case 4:
            return std::make_shared<Square>(side);
        case 5:
            return std::make_shared<Pentagon>(side);
        case 6:
            return std::make_shared<Hexagon>(side);
        case 8:
            return std::make_shared<Octogon>(side);
        default:
            return nullptr;

    }
}