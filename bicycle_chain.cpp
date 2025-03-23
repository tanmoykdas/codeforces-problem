#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    int m;
    cin >> m;
    int b[m];
    for(auto& x : b) cin >> x;
    vector<int> v;
    int e;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(b[i] % a[j] == 0) {
                e = b[i] / a[j];
                v.push_back(e);
            }
        }
    }
    int mx = *max_element(v.begin(), v.end());
    sort(v.rbegin(), v.rend());
    int c = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == mx) {
            c++;
        }
        else 
        break;
    }
    cout << c;
    return 0;
}