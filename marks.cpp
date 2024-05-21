#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++) {
            a[i][j] = s[j] - '0';
        }
    }
    vector<int> v;
    for(int i = 0; i < m; i++) {
        int mx = 0, p = 0;
        for(int j = 0; j < n; j++) {
            if(a[j][i] > mx) {
                mx = a[j][i];
            }
        }
        v.push_back(mx);
    }
    vector<int> vc[n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j][i] == v[i])
            vc[j].push_back(1);
        }
    }
    int c = 0;
    for(int i = 0; i < n; i++) {
        if(vc[i].size() != 0)
        c++;
    }
    cout << c;
    return 0;
}