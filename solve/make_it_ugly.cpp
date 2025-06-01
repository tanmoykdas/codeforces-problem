#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a[i]);
        }
        sort(v.rbegin(), v.rend());
        int l = a[n - 1];
        int c = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] == l)
                c++;
        }
        if (c == n || c < 3)
                cout << -1 << endl;
            else
            {
                int temp1 = c - 3;
                int temp2 = n - c - 1;
                cout << temp1 + temp2 << endl;
            }
    }
    return 0;
}