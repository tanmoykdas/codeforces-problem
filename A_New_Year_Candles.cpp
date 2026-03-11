#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b; cin >> a >> b;
    ll hours = 0, remain = 0;

    while (a > 0) {
        hours += a;
        remain += a;

        a = remain / b;
        remain %= b;
    }
    cout << hours;
    return 0;
}