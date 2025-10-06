#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0, c2 = 0;
    for (auto x : s) {
        if (x == '0') c0++;
        else if (x == '1') c1++;
        else c2++;
    }
    if (n == c2) {
        for (int i = 0; i < n; i++) cout << '-';
        cout << "\n";
        return;
    }
    for (int i = 0; i < c0; i++) cout << '-';
    int remain  =  n - (c1 + c0);
    if ((c2 * 2) >= remain) {
        if (remain == 1) cout << '-';
        else for (int i = 0; i < remain; i++) cout << '?';
    } else {
        for (int i = 0; i < c2; i++) cout << '?';
        int extra = n - (c0 + c1 + (c2 * 2));
        for (int i = 0; i < extra; i++) cout << '+';
        for (int i = 0; i < c2; i++) cout << '?';
    }
    for (int i = 0; i < c1; i++) cout << '-';

    cout << "\n";
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