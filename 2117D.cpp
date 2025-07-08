#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            int index = i + 1;
            int x = index;
            int y = n - index + 1;
            cout << a[i] << " " << x << " " << y << endl;
            if (i == 0)
            {
                if ((a[i] % y == 0))
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                if ((a[i] % x == 0) || (a[i] % y == 0))
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}