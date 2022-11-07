#include <iostream>
#include <vector>
using namespace std;



int main() {
    string s = "MCMXCIV";
    int sum = 0;
    int aux = 0;

    for(string::iterator itr = s.begin(); itr != s.end(); itr++){

        if(*itr == 73 ){
            sum+=1;
        }else if(*itr == 86){
            if(aux != 73) {
                sum += 5;
            }else{
                sum += 3;
            }
        }else if(*itr == 88){
            if(aux != 73) {
                sum += 10;
            }else{
                sum += 8;
            }
        }else if(*itr == 76){
            if(aux != 88) {
                sum += 50;
            }else{
                sum += 30;
            }
        }else if(*itr == 67){
            if(aux != 88) {
                sum += 100;
            }else{
                sum += 80;
            }
        }else if(*itr == 68){
            if(aux != 67) {
                sum += 500;
            }else{
                sum += 300;
            }
        }else if(*itr == 77){
            if(aux != 67) {
                sum += 1000;
            }else{
                sum += 800;
            }
        }

        aux = *itr;

    }

    cout<<sum;

    return 0;
}
