#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll a, b; cin >> a >> b;

    if (b == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        ll mul = a * b * 2;
        cout << a << " " << mul - a << " " << mul << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}