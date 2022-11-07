#include <iostream>
using namespace std;


int main() {

    string s = "{[]";
    int size = s.size();

    for(int i=0; i < size-1; i++){

        if(size%2 == 1){
            cout<<"false"<<endl;
        }

        if(s[i] == 123 && s[i+1] == 91){
            if(s[i+2] == 93 && s[i+3] == 125){
                cout<<"true";
            }
        }

        if(int(s[i]) == 40 && int(s[i+1]) != 41){
            cout<<"false"<<endl;
        }

        if(int(s[i]) == 91 && int(s[i+1]) != 93){
            cout<<"false"<<endl;
        }

        if(int(s[i]) == 123 && int(s[i+1]) != 125){
            cout<<"false"<<endl;
        }

    }

    cout<<"true"<<endl;


    //return 0;
}
