#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        vector<int> v;
        v.push_back(a[m - 1]);
        for(int j = m - 2; j >= 0; j--)
        {
            if(a[j] > v.back())
            {
                v.push_back(a[j]%10);
                v.push_back(a[j]/10);
            }
            else
            v.push_back(a[j]);
        }
        cout << (is_sorted(v.rbegin(),v.rend()) ? "YES" : "NO") << '\n';
    }
}