#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.rbegin(),v.rend());
    int c1 = 0, c2 = 0, p1 = 0, p2 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 5)
            ++c1;
        else
            ++c2;
    }
    int l = c1 / 9;
    if(l != 0 && c2 != 0) {
        for(int i = 0; i < 9 * l; i++) {
            cout << 5;
        }
        for(int i = 0; i < c2; i++) {
            cout << 0;
        }
    }
    else if(c1 < 9 && c2 != 0) {
        cout << 0;
    }
    else 
    cout << -1;
    return 0;
}