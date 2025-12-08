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
    bool tie = (ax ^ bx);
    int last;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) last = i;
    }
    if (!tie) cout << "Tie" << endl;
    else if (last % 2) cout << "Mai" << endl;
    else cout << "Ajisai" << endl;

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