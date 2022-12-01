#include <iostream>

template <typename T>
class SharedPtr{
public:
    SharedPtr()
    {
        value = nullptr;
        counter = new unsigned int;
        *counter = 1;
    }
    SharedPtr(T * p)
    {
        value = p;
        counter = new unsigned int;
        *counter = 1;
    }
    SharedPtr(SharedPtr & p)
    {
        value = p.value;
        *(p.counter) = *(p.counter) + 1;
        counter = p.counter;
    }
    SharedPtr(SharedPtr &&p)
    {
        value = p.value;
        counter = p.counter;
        p.value = nullptr;
    }
    SharedPtr& operator=(SharedPtr &p)
    {
        if(value){
            delete value;
        }

        if(counter){
            delete counter;
        }

        value = p.value;
        p.value = nullptr;
        *(p.counter) = *(p.counter) + 1;
        counter = p.counter;
        return *this;
    }

    SharedPtr& operator=(SharedPtr &&p)
    {
        if(value){
            delete value;
        }

        if(counter){
            delete counter;
        }

        value = p.value;
        counter = p.counter;
        p.value = nullptr;
        return *this;
    }

 unsigned int get_count(){
    return *counter;
    }

    ~SharedPtr()
    {
        __cleanup__();
    }

private:

    void __cleanup__()
    {
        (*counter)--;
        if (*counter == 0)
        {
            if (nullptr != value)
                delete value;
            delete counter;
        }
    }

    T* value;
    unsigned int *counter = nullptr;
};


class Shape{
    int length;

public:
    Shape(int l): length(l){}

    int getLength(){
        return length;
    }

    virtual ~Shape() = default;
};

using namespace std;

int main() {
    SharedPtr<Shape> p1(new Shape(5));
    SharedPtr<Shape> p2;
    p2 =p1;
    SharedPtr<Shape> p3;
    SharedPtr<Shape> p4 =p2;
    SharedPtr<Shape> p5;
    p5 =  std::move(p1);
    SharedPtr<Shape> p6 = move(p2);

    cout<<p2.get_count()<<endl;
    cout<<p3.get_count()<<endl;
    cout<<p4.get_count()<<endl;
    cout<<p5.get_count()<<endl;
    cout<<p6.get_count()<<endl;


    return 0;
}
