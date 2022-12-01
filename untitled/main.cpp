#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int increase_operator (int i)
{ return ++i;
}
vector<int> solution(vector<int> &vc) // 1 4 2 || 1 4 2 5 12
{ int maxElement; // var for the biggest element from vector
    maxElement = *max_element(vc.begin(), vc.end()); // 4 || 12
    maxElement++; // 5 || 13
    vc.push_back(maxElement); // 1 4 2 5 || 1 4 2 5 12 13
    int sum ; // var for sum of all elements
    sum = accumulate(vc.begin(), vc.end(), 0); // 12  || 37
    vc.push_back(sum); // 1 4 2 5 12 || 1 4 2 5 12 37
    std::vector<int> ret_vector; // returned vector
    ret_vector.resize(vc.size()); // if no set of size, will be an empty vector
    transform (vc.begin(), vc.end(), ret_vector.begin(), increase_operator); // 2 5 3 6 13 38  || increase all the elements by 1
    return ret_vector;
}
int main() {
    vector<int> arr;
    vector<int> arr2;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(2);
    solution(arr);
    arr2 = solution(arr);
    for (int i : arr2)
        cout << i << " ";
    return 0;
}