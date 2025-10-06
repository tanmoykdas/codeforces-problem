#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ca = 0, cb = 0;
    for (auto x : s) {
        if (x == 'a') ca++;
        else cb++;
    }
    if (ca == cb || ca == 0 || cb == 0) {
        cout << -1 << "\n";
        return;
    }
    cout << (max(ca, cb) - 1) - (min(ca, cb)) << "\n";
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