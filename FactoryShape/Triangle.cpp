//
// Created by Dani on 11/30/2022.
//
#include "Triangle.h"
#include "math.h"

double Triangle::aria(){
    return (sqrt(3)*getLength()*getLength())/4;
}

double Triangle::perimeter(){
    return 3*getLength();
}

