//
// Created by Dani on 11/30/2022.
//
#include "Square.h"

double Square::aria(){
    return getLength()*getLength();
}

double Square::perimeter(){
    return 4*getLength();
}