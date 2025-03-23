#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    map<string,int> frq;
    int mx = 0;
    string fs;
    while(t--) {
        string s;
        cin >> s;
        frq[s]++;
        if(frq[s] > mx)
        {
            mx = frq[s];
            fs = s;
        }
    }
    cout << fs;
    return 0;
}