//
// Created by Dani on 11/30/2022.
//

#include "Pentagon.h"
#include "math.h"
double Pentagon::aria(){
    return 0.25*sqrt(5*(5+2*sqrt(5)))*getLength()*getLength();
}

double Pentagon::perimeter(){
    return 5*getLength();
}