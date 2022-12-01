//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_TRIANGLE_H
#define FACTORYSHAPE_TRIANGLE_H
#include "Shape.h"
class Triangle:public Shape{
public:
    explicit Triangle(int l): Shape(l){}

    double aria() override;

    double perimeter() override;

    void write() override{
        std::cout<<"Triangle aria: "<<aria()<<std::endl;
        std::cout<<"Triangle perimeter:" <<perimeter()<<std::endl;
    };
};
#endif //FACTORYSHAPE_TRIANGLE_H
