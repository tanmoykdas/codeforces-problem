#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s = "codeforces";
        char a;
        cin >> a;
        bool ans = false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == a)
            ans = true;
        }
        if(ans)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}