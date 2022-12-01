#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class MyString{
private:
    char* name;

public:

    explicit MyString(char* n= nullptr):name(n){}

    MyString(const MyString &n){
        name = new char[(sizeof(n)/ sizeof(char*))+1];
        strcpy(name, n.name);
    }

    MyString(MyString &&n){
        name = new char[(sizeof(n)/ sizeof(char*))+1];
        this->name = n.name;
        n.name = nullptr;
    }

    MyString& operator=(const MyString& n){

        if(name){
            delete []name;
        }

        name =  new char[(sizeof(n)/ sizeof(char*))+1];
        strcpy(name, n.name);
        return *this;

    }

    MyString& operator=(MyString&& n){

        if(name){
            delete []name;
        }

        name =  new char[(sizeof(n)/ sizeof(char*))+1];
        name = n.name;
        n.name = nullptr;
        return *this;

    }

    MyString& operator+(const MyString& n);

    friend ostream& operator<<(ostream& os, const MyString& dt);

};

MyString& MyString::operator+(const MyString& n){
    strcat(name, n.name);
    return *this;
}

ostream& operator<<(ostream& os, const MyString& dt)
{
    os << dt.name;
    return os;
}


int main() {

    MyString s1("sdd");
    MyString s2= s1;
    MyString s3;
    s3 = s1;

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    MyString s4;
    s4 = s3+s1;
    cout<<s4<<endl;

    s3 = MyString("sds");
    cout<<s3<<endl;

    vector<MyString> my_string;
    my_string.push_back(MyString("23"));


    return 0;
}
