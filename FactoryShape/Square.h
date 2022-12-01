//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_SQUARE_H
#define FACTORYSHAPE_SQUARE_H
#include "Shape.h"

class Square:public Shape{
public:
    explicit Square(int l): Shape(l){}

    double aria() override;

    double perimeter() override;

    void write() override{
        std::cout<<"Square aria: "<<aria()<<std::endl;
        std::cout<<"Square perimeter: "<<perimeter()<<std::endl;
    }
};
#endif //FACTORYSHAPE_SQUARE_H
