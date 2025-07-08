#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;
        int even = 0, odd = 0;
        long long sum = 0, ans = -1e18;
        bool con;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i] % 2 == 0) // even
                    con = true;
                else
                    con = false;
                sum += a[i];
            }
            else
            {
                if (sum < 0)
                    sum = 0;
                if (con)
                { // bijor lagbe
                    if (a[i] % 2 != 0)
                    {
                        sum += a[i];
                        con = false;
                    }
                    else
                    { // jor hoile
                        sum = a[i];
                    }
                }
                else
                {
                    if (a[i] % 2 == 0)
                    { // jor lagbe
                        sum += a[i];
                        con = true;
                    }
                    else
                    { // bijor hoile
                        sum = a[i];
                    }
                }
            }
            ans = max(sum, ans);
            // cout << sum << " ";
        }
        cout << ans << endl;
    }
    return 0;
}