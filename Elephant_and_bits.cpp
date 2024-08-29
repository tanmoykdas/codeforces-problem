#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, ss;
    cin >> s;
    bool con = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '0' && con == true) {
            con = false;
            continue;
        }
        ss.push_back(s[i]);
    }
    if (!con) {
        cout << ss;
    } else {
        for (int i = 0; i < s.size() - 1; ++i) {
            cout << s[i];
        }
    }
    return 0;
}