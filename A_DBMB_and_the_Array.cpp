#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, x;
        cin >> n >> s >> x;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        ll sum = 0;
        for (auto x : a)
            sum += x;
        if (sum > s)
        {
            cout << "NO\n";
        }
        else if (sum == s)
        {
            cout << "YES\n";
        }
        else
        {
            ll req = s - sum;
            if (req % x == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}