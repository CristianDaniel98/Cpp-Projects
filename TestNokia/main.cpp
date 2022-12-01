#include <iostream>
#include <vector>
using namespace std;

void sortAsc(vector<string> &list1){
    bool flag = true;
    string tmp;

    while (flag){
        flag =false;
        for(vector<string>::iterator itr = list1.begin(); itr != list1.end()-1; itr++)
            if(*itr > *(itr+1)){
                tmp = * itr;
                *itr = *(itr+1);
                *(itr+1) = tmp;
                flag = true;
            }
    }
}

void sortDsc(vector<string> &list1){
    bool flag = true;
    string tmp;

    while (flag){
        flag =false;
        for(vector<string>::iterator itr = list1.begin(); itr != list1.end()-1; itr++)
            if(*itr < *(itr+1)){
                tmp = * itr;
                *itr = *(itr+1);
                *(itr+1) = tmp;
                flag = true;
            }
    }
}

void foundBoys(vector<string> list1){
    int size = list1.size();
    cout<<"Boys are: "<<endl;

    for(int i = 0; i< size; i++){
        string name = list1[i];
        if(name[name.size()-1] != 'a'){
                cout<<list1[i]<<endl;
        }
    }

}

vector<string> boys(vector<string> list1){
    vector<string> boys_list;
    int size = list1.size();

    for(int i = 0; i< size; i++){
        string name = list1[i];
        if(name[name.size()-1] != 'a'){
           boys_list.push_back(name);
        }
    }
    sortAsc(boys_list);

    return boys_list;
}

vector<string> girls(vector<string> list1){
    vector<string> girls_list;
    int size = list1.size();

    for(int i = 0; i< size; i++){
        string name = list1[i];
        if(name[name.size()-1] == 'a'){
            girls_list.push_back(name);
        }
    }

    sortDsc(girls_list);
    return girls_list;
}

void printList(vector<string> list1){
    for(vector<string>::iterator itr = list1.begin(); itr != list1.end(); itr++){
        cout<<*itr<<endl;
    }
}

vector<string> interLeaving(vector<string> list1, vector<string> list2){
    vector<string> interLeavingVector;
    auto list1_it = list1.begin();
    auto list2_it = list2.begin();
    while( list1_it != list1.end() && list2_it != list2.end() ) {
        if( list2_it != list1.end() ) {
            interLeavingVector.push_back(*list1_it);
            list1_it++;
        }
        if( list2_it != list2.end() ) {
            interLeavingVector.push_back(*list2_it);
            list2_it++;
        }
    }
    return interLeavingVector;

}

int main() {
    vector<string> name = {"Alin", "Alina", "Marian", "Mariana", "George", "Corina"};
    //foundBoys(name);

    vector<string> list1 = boys(name);
    vector<string> list2 = girls(name);

    cout<<"******************"<<endl;
    cout<<"Boys:"<<endl;
    printList(list1);
    cout<<"*******************"<<endl;
    cout<<"Girls:"<<endl;
    printList(list2);

    cout<<"*******************"<<endl;
    vector<string> list3 = interLeaving(list1, list2);
    printList(list3);


    return 0;
}
