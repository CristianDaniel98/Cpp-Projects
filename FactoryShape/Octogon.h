//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_OCTOGON_H
#define FACTORYSHAPE_OCTOGON_H


#include "Shape.h"
class Octogon:public Shape{
public:
    explicit Octogon(int l): Shape(l){}

    double aria() override;

    double perimeter() override;

    void write() override{
        std::cout<<"Octogon aria: "<<aria()<<std::endl;
        std::cout<<"Octogon perimeter:" <<perimeter()<<std::endl;
    };
};


#endif //FACTORYSHAPE_OCTOGON_H
