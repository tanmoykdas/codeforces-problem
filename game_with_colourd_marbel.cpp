#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[a[i]]++;
    }
    sort(a, a + n);
    int p1 = 0, p2 = 0, k = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i])
        {
            if (k % 2)
            {
                p2 += 1;
                if (v[a[i]] == 1)
                    p2 += 1;
            }
            else
            {
                p1 += 1;
                if (v[a[i]] == 1)
                    p1 += 1;
            }
            k++;
        }
    }
    cout << p1 << " " << p2 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}