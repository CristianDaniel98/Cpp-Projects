//
// Created by Dani on 11/30/2022.
//

#include "math.h"
#include "Hexagon.h"

double Hexagon::aria(){
    return (3* sqrt(3)*getLength()*getLength())/2;
}

double Hexagon::perimeter(){
    return 6*getLength();
}