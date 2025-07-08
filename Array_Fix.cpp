#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, c = 0, max = 0;
        cin >> m;
        int a[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        for (int j = 1; j < m; j++)
        {
            if (a[j] < a[j - 1])
            {
                int e1, e2;
                e1 = a[j - 1] / 10;
                e2 = a[j - 1] % 10;
                if (e2 < max)
                {
                    c++;
                    break;
                }
                else
                {
                    max = e2;
                }
                if ((e1 < a[j] && e2 < a[j]) && e1 < e2)
                    continue;
                else
                    c++;
            }
            {
                max = a[j - 1];
            }
            // cout << max << " ";
        }
        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}