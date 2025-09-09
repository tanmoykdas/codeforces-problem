#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) { 
        int n, m;
        cin >> n >> m;
        int mx = max(n, m);
        int mn = min(n, m);
        if (n == m) cout << 0 << '\n';
        else if (mx % mn == 0) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
    return 0;
}