//
// Created by Dani on 11/30/2022.
//

#ifndef FACTORYSHAPE_SHAPE_H
#define FACTORYSHAPE_SHAPE_H

#include <iostream>

class Shape{
protected:
    double length;

public:
    explicit Shape(double s):length(s){}

    virtual ~Shape()=default;
    virtual void write() = 0;
    virtual double perimeter() = 0;
    virtual double aria() = 0;
    [[nodiscard]] double getLength() const{
        return length;
    };
};


#endif //FACTORYSHAPE_SHAPE_H
