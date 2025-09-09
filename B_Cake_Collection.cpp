#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        long long ans = 0;    
        if (m > n) {
            long long temp = m - n;
            long long c = 1 + temp;
            for (int i  = 0; i < n; i++) {
                ans += (a[i] * c++);
            }
            cout << ans << '\n';
        } else {
            long long temp = n - m;
            long long c = 1;
            for (int i = temp; i < n; i++) {
                ans += (a[i] * (c++));
            }
            cout << ans << '\n';
        }
    }
}