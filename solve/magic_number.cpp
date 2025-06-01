#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    bool ans = true;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1')
        c1++;
        else if(s[i] == '4')
        c2++;
        else {
            ans = false;
            break;
        }
        if(s[i] == '1')
        c2 = 0;
        if(c2 > 2)
        ans = false;
        if(c1 == 0 && c2 != 0) {
            ans = false;
            break;
        }
    }
    if(ans)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}