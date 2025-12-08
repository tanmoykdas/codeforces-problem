#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;
    int ax = a[0], bx = b[0];
    for (int i = 1; i < n; i++) {
        ax ^= a[i];
        bx ^= b[i];
    }
    // cout << ax << " " << bx << endl;
    int ca = 0, cb = 0;
    for (int i = 0; i < n; i += 2) {
        if (a[i] != b[i]) ca++;
    }
    for (int i = 1; i < n; i += 2) {
        if (a[i] != b[i]) cb++;
    }
    if (ax == 0 && bx == 0) {
        cout << "Tie" << endl;
        return;
    }
    if (ax == 0) {
        if (ca > cb) cout << "Ajisai" << endl;
        else cout << "Mai" << endl;
        return;
    }
    if (bx == 0) {
        if (cb > ca) cout << "Mai" << endl;
        else cout << "Ajisai" << endl;
        return;
    }
    cout << "Tie" << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}