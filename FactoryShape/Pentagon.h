//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_PENTAGON_H
#define FACTORYSHAPE_PENTAGON_H

#include "Shape.h"
class Pentagon:public Shape{
public:
    explicit Pentagon(int l): Shape(l){}

    double aria() override;

    double perimeter() override;

    void write() override{
        std::cout<<"Pentagon aria: "<<aria()<<std::endl;
        std::cout<<"Pentagon perimeter:" <<perimeter()<<std::endl;
    };
};


#endif //FACTORYSHAPE_PENTAGON_H
