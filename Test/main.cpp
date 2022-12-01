#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> &A, vector<string> &B) {
    vector<string> ret_vector = A;
    for(vector<string>::iterator itr = B.begin(); itr != B.end(); itr++){
        ret_vector.push_back(*itr);
    }

    for(vector<string>::iterator itr = ret_vector.begin(); itr != ret_vector.end(); itr++){
       for(vector<string>::iterator itr1 = itr + 1; itr1 != ret_vector.end(); itr1 ++){
           if(*itr == *itr1){
               ret_vector.erase(itr1);
           }
       }
    }

    bool flag = true;
    string  tmp  ;

    while (flag){
        flag = false;
        for(vector<string>::iterator itr = ret_vector.begin(); itr != ret_vector.end(); itr++){
            if(*itr > *(itr+1)){
                tmp = *itr;
                *itr = *(itr+1);
                *(itr+1) = tmp;
                flag = true;
            }
        }
    }

    return  ret_vector;

}

int main(){
    vector<string> names1 = {"Ana", "Maria", "Oana"};
    vector<string> names2 = {"Oana", "Ioana", "Alina"};
    vector<string> names3 = solution(names1, names2);

    for(vector<string>::iterator itr = names3.begin(); itr != names3.end(); itr++){
        cout<< *itr<<endl;
    }

}