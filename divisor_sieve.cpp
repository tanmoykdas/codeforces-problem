#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    int gcd = __gcd(n, m);
    int c = 0;
    for (int i = 1; i*i<=gcd; ++i) {
        if (gcd % i == 0) {
            c++;
            if (i != (gcd / i)) {
                c++;
            }
        }
    }
    cout << c << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--) {
        solve();
    }
    return 0;
}