#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int num = 0;
    //cout << s[0] - '0';
    for(int i = 0; i < s.size(); i++) {
        if(i == 0)
        num = int(s[i] - '0');
        else {
            num = (10 * num) + int(s[i] - '0');
        }
    }
    cout << num;
    return 0;
}