#include <iostream>
#include <vector>

using namespace std;

vector<int> sortVc(vector<int> v1, vector<int> v2){
    vector<int> retVc;
    auto itr = v1.begin();
    auto itr1= v2.begin();

    while(itr != v1.end() || itr1 != v2.end()){
        if(itr != v1.end()){
            retVc.push_back(*itr);
            itr++;
        }

        if(itr1 != v2.end()){
            retVc.push_back(*itr1);
            itr1++;
        }

    }

    return retVc;
}

void printVector(const vector<int> &v){
    for(int i : v){
        cout<<i<<endl;
    }
}

int main(){
    vector<int> v1 = {1, 3, 5, 7, 9, 11};
    vector<int> v2 = {2, 4, 6, 8};

    vector<int> v3 = sortVc(v1, v2);
    printVector(v3);

}
