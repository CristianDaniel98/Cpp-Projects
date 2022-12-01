#include <iostream>
#include <math.h>
using namespace std;

class Equilateral{
public:
    Equilateral(int l=0):length(l){}

    int getLength(){
        return length;
    }

    virtual int area(){
        return (sqrt(3)/4)*length*length;
    }

    virtual int perimeter(){
        return 3*length;
    }

private:
    int length;
};

class Isosceles: public Equilateral{
public:
    Isosceles(int l, int l1): Equilateral(l), length1(l1){}

    int getLength1(){
        return length1;
    }

    virtual int area(){
        return 1/2*length1* sqrt(getLength()*getLength()-(length1*length1)/4);
    }

    virtual int perimeter(){
        return 2*getLength()+length1;
    }

private:
    int length1;
};

class Triangle: public Isosceles{
public:
    Triangle(int l, int l1, int l2):Isosceles(l,l1), length2(l2){}

    int area(){
        return (getLength()+getLength1())*length2/2;
    }

    int perimeter(){
        return getLength()+getLength1()+length2;
    }

private:
    int length2;
};

void write(Equilateral *p){
    cout<<"perimeter: "<<p->perimeter()<<"\n";
    cout<<"aria: "<<p->area()<<"\n";
}

int main() {
    Equilateral eq(5);
    Isosceles is(5,8);
    Triangle tr(5,6,7);

    write(&eq);
    write(&is);
    write(&tr);

    return 0;
}
