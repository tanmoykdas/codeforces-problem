#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b, c;
        cin >> b >> c;
        vector<char> cc, ccc;
        for (int i = 0; i < m; i++) {
            if (c[i] == 'D') ccc.push_back(b[i]);
            else cc.push_back(b[i]);
        }
        reverse(cc.begin(), cc.end());
        for (auto x : cc) cout << x;
        cout << a;
        for (auto x : ccc) cout << x;
        cout << '\n';
    }
}