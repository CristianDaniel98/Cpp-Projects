//
// Created by Dani on 11/30/2022.
//

#include "Octogon.h"
#include "math.h"
double Octogon::aria(){
    return sqrt(5*(5+2*sqrt(5)))*getLength()*getLength();
}

double Octogon::perimeter(){
    return 8*getLength();
}