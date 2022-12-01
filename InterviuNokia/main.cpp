#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1. Sa se genereze o secventa de numere de la 1 la 10.
//2. Sa se extraga intr-o noua secventa numerele pare.
//3. Sa se imparta toate numerele din secventa para la 2.
//4. Din secventa rezultata de la pct. 3 sa se gaseasca ultimul divizor al lui 15.

void printVector(vector<int> v){
    for(int i : v){
        cout<<i<<endl;
    }
}

int div_operator(int i){
    return i/2;
}

static int current = 0;
int UniqueNumber () { return ++current; }

int main() {
    vector<int> vc;
    vc.resize(10);
    std::generate(vc.begin(), vc.end(), UniqueNumber);
    vector<int> evenVc;
    std::copy_if(vc.begin(), vc.end(),std::back_inserter(evenVc), [](int x) {return x%2 == 0;});
    vector<int> divNumb;
    std::transform(evenVc.cbegin(),evenVc.cend(), std::back_inserter(divNumb), div_operator);
    printVector(evenVc);
    cout<<"***********************"<<endl;
    printVector(divNumb);
    std::reverse(divNumb.begin(), divNumb.end());
    cout<<"***********************"<<endl;
    auto div = std::find_if(divNumb.begin(), divNumb.end(), [](int i){return 15%i == 0;});
    cout<<*div;



    return 0;
}
