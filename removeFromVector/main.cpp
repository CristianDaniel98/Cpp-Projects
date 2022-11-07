#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> nums = {4,3,2,9};
    vector<int> returnVector;
    int mult = 1;
    int counter = 0;
    int sum = 0;
    int rem = 0;

    for(vector<int>::iterator itr=nums.begin(); itr != nums.end(); itr++){
        sum =sum*mult + int(*itr);
        mult = 10;
        counter++;

    }




    for(int i=0; i<counter; i++){
        //cout<<sum<<endl;
        if( i == 0){
            if(sum%10 == 9){
                rem = 0;
                returnVector.push_back(rem);
                rem = sum%100 + 1;
                sum = sum/100;
                returnVector.push_back(rem);
                counter--;
            }
        }else {
            rem = sum % 10;
            sum = sum/10;
            returnVector.push_back(rem);
        }

    }

    for(vector<int>::iterator itr=returnVector.end() - 1; itr !=returnVector.begin()-1; itr--){
        cout<<*itr<<endl;
    }

    return 0;
}
