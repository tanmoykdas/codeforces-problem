#include<bits/stdc++.h>
using namespace std;
int dp[10000000];
int solve(int n) {
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(dp[n] != -1) return dp[n];
    return dp[n] = solve(n - 2020) || solve(n - 2021);
}
int main() {
    int t;
    cin >> t;
    memset(dp, -1, sizeof(dp));
    while(t--) {
        int n;
        cin >> n;
        if(solve(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}