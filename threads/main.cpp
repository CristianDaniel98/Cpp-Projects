#include <iostream>
#include <thread>

void fun1(){
    std::cout<<"First thread"<<std::endl;
}

void fun2(){
    std::cout<<"First thread"<<std::endl;
}

int main() {
    std::thread t1(fun1);
    std::thread t2(fun2);

    if(t1.joinable()){
        t1.join();
    }

    if(t2.joinable()){
        t2.join();
    }



    return 0;
}
