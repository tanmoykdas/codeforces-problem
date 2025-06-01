#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long a[n];
    for (auto& x : a) cin >> x;
    long long gcd = 0;
    for (int i = 0; i < n; ++i) {
        gcd = __gcd(gcd, a[i]);
    }
    long long c = 0;
    for (int i = 1; i <= sqrt(gcd); ++i) {
        if (gcd % i == 0) {
            c++;
            if (i != (gcd / i)) {
                c++;
            }
        }
    }
    cout << c;
    return 0;
}