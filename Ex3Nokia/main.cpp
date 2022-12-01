#include <iostream>
#include <math.h>
using namespace std;

class Shape{
public:
    Shape(int l):length(l){}
    int getLength(){return length;}
    virtual int area()=0;
    virtual int perimeter()=0;

private:
    int length;

};

class Triangle:public Shape{
public:
    Triangle(int l): Shape(l){}

    int area(){
        return (sqrt(3)*getLength()*getLength())/4;
    }

    int perimeter(){
        return 3*getLength();
    }
};

class Square:public Shape{
public:
    Square(int l): Shape(l){}

    int area(){
        return getLength()*getLength();
    }

    int perimeter(){
        return 4*getLength();
    }
};

class Hexagon:public Shape{
public:
    Hexagon(int l): Shape(l){}

    int area(){
        return (3* sqrt(3)*getLength()*getLength())/2;
    }

    int perimeter(){
        return 6*getLength();
    }
};

void write(Shape *s){
    cout<<"perimeter: "<<s->perimeter()<<endl;
    cout<<"area: "<<s->area()<<endl;
}

int main() {
    Triangle tr(5);
    write(&tr);
    Square sq(5);
    write(&sq);
    Hexagon he(5);
    write(&he);

    return 0;
}
