//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_HEXAGON_H
#define FACTORYSHAPE_HEXAGON_H
#include "Shape.h"
class Hexagon:public Shape{
public:
    explicit Hexagon(int l): Shape(l){}

    double aria() override;

    double perimeter() override;

    void write() override{
        std::cout<<"Hexagon aria: "<<aria()<<std::endl;
        std::cout<<"Hexagon perimeter: "<<perimeter()<<std::endl;
    }
};
#endif //FACTORYSHAPE_HEXAGON_H
