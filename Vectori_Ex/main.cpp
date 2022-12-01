#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<string> &v){
    for(auto s : v){
        cout<<s<<endl;
    }
}

int main() {
    vector<string> vc = {"Alin", "Alina", "Marian", "Mariana", "George", "Corina"};
    vector<string> boys;
    vector<string> girls;
    std::copy_if(vc.begin(), vc.end(), std::back_inserter(boys),[](string a){return a[a.size()-1] != 'a'; });
    sort(boys.begin(), boys.end());

    std::copy_if(vc.begin(), vc.end(), std::back_inserter(girls),[](string a){return a[a.size()-1] == 'a'; });
    sort(girls.begin(), girls.end(), greater<string>());

    cout<<"**************************"<<endl;
    printVector(boys);
    cout<<"**************************"<<endl;
    printVector(girls);

    vector<string> interLiving;
    merge(boys.begin(), boys.end(), girls.begin(), girls.end(), back_inserter(interLiving), [](string a, string b){return a[a.size()-1] != 'a' && b[b.size()-1] == 'a';});

    cout<<"**********************"<<endl;
    printVector(interLiving);

    return 0;
}
