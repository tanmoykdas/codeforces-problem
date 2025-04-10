#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (auto &x : a)
        cin >> x;
    long long sum = 0, target = 0, total;
    total = n * k;
    for (auto x : a)
        sum += x;
    if (sum < x)
    {
        if (sum * k >= x)
        {
            if (x % sum == 0)
            {
                target = x / sum;
                cout << total - (target * n) << endl;
            }
            else
            {
                target = x / sum;
                // cout << "target:" << target << endl;
                long long get = target * sum;
                // cout << "get:" << get << endl;
                int pos;
                for (int i = 0; i < n; i++)
                {
                    if (get < x)
                        get += a[i];
                    else
                    {
                        pos = i - 2;
                        break;
                    }
                }
                cout << total - (target * n) - pos << endl;
            }
        }
        else
            cout << 0 << endl;
    }
    else if (sum == x)
    {
        cout << k << endl;
    }
    else
    {
        int pos;
        // cout << 's';
        for (int i = 0; i < n; i++)
        {
            target += a[i];
            if (target > x)
            {
                pos = i + 1;
                break;
            }
        }
        cout << total  << " " << pos << endl;
        cout << total - (n - pos) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}