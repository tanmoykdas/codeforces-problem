#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1e7 + 10;
    vector<bool> p(n, 1);
    vector<int> hp(n, 0), lp(n, 0);
    p[0] = p[1] = 0;
    for (int i = 2; i < n; i++) {
        if (p[i] == 1) {
            lp[i] = hp[i] = i;
            for (int j = i * 2; j < n;  j += i) {
                p[j] = 0;
                hp[j] = i;
                if (lp[j] == 0) {
                    lp[j] = i;
                }
            }
        }
    }
    cin >> n;
    map<int, int> prime_factor;
    while (n > 1) {
        int p = (hp[n]);
        while (n % p == 0) {
            prime_factor[p]++;
            n /= p;
        }
    }
    for (auto factor : prime_factor) {
        cout << factor.first << " " << factor.second << endl;
    }
    return 0;
}