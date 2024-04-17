#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int c = 0;
    for(int i = 0; i < s2.size(); i++) {
        if(s2[i] == ' ') {
            c++;
            continue;
        }
        for(int j = 0; j < s1.size(); j++) {
            if(s2[i] == s1[j]) {
                c++;
                s1[j] = '*';
                break;
            }
        }
    }
    if(s2.size() == c)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}