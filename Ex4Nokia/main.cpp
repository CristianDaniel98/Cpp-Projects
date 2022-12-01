#include <iostream>
#include <math.h>
using namespace std;

template<typename T>
class MyVector{
public:
    MyVector(){head = nullptr;}
    MyVector(MyVector &copy){
        size_ = copy.size_;
        capacity_ = copy.capacity_;

        while(copy.head != nullptr){
            Node *tmp1;
            tmp1= copy.head;
            tmp1->data = copy.head->data;
            head = tmp1;
            copy.head = copy.head->next;
            //delete tmp1;
        }


    }

    void push_back(const T& d){
        Node *tmp = new Node;
        tmp->data = d;
        tmp->next = head;
        capacity_ = pow(2,size_);
        size_++;
        head = tmp;
    }

    void pop(){
        if(head != nullptr){
            Node *tmp = head;
            head = head->next;
            delete tmp;
            size_--;
        }
    }

   int size(){
       return size_;
    }

    int capacity(){
        return capacity_;
    }

    void print(){
        if (head == NULL){
            cout<<"Nothing to print! "<<endl;
        }

        Node *p = head;
        while(p){
            cout<<p->data<<"  ";
            p=p->next;
        }

        cout<<endl<<endl;
    }

private:
    int capacity_ = 0;
    int size_ = 0;

    struct Node{
        T data;
        Node *next;
    };
    Node *head;
};



int main() {
    MyVector<int> v;
    v.push_back(10);
    v.push_back(15);
    v.push_back(25);
    v.push_back(34);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.print();

    MyVector<int> v1(v);

    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    v1.print();

    return 0;
}
