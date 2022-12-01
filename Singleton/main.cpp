#include <iostream>

using namespace std;

class Singleton{

public :
    static Singleton* getInstance(){
        if(!s){
            s = new Singleton();
        }else{
            cout<<"Instance already exists!"<<endl;
        }
        return s;
}

private:
    Singleton(){
        cout<<"Constructor.."<<endl;

};

    static Singleton * s;
};

Singleton *Singleton::s = nullptr;

int main() {
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();
    Singleton::getInstance();

    return 0;
}
