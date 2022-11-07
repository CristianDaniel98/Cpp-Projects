#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<string> s = {"fasqwe", "flow", "flight","fsda"};
    int ans = s[0].length(); //lungimea primului cuvant
    int n = s.size(); // dimesiunea completa a vectorului 4
    for(int i=1; i<n; i++){ // se parcurge de 4 ori
        int j = 0;
        while(j<s[i].length() && s[i][j]==s[0][j])j++;
        ans = min(ans, j);
    }
    cout<< s[0].substr(0, ans)<<endl;
    cout<<s[1][5]<<endl;
    return 0;
}
