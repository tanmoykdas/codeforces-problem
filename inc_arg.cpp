#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            c++;   
            break;     
        }
        c++;
    }
    cout << c;
    return 0;
}