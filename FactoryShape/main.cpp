#include <iostream>
#include "vector"
#include "ShapeFactory.h"
#include "memory"

int main() {
    std::vector<int> vec = {3, 4, 5, 6, 7, 8, 9};

    for(const auto &el : vec){
        std::shared_ptr<Shape> shape = ShapeFactory::createShape(5, el);
        if(shape){
            shape->write();
        }else{
            std::cout<<"No implementation for shape with "<< el << " sides"<<std::endl;
        }
    }

    return 0;
}
