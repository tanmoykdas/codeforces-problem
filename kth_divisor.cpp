#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    vector<long long> v;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            v.push_back(i);
            if (i != (n / i)) {
                v.push_back(n / i);
            }
        }
    }
    sort (v.begin(), v.end());
    if (k <= v.size()) {
        cout << v[k - 1];
    } else {
        cout << -1;
    }
    return 0;
}