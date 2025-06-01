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
        if ((m / 2) % 2 == 0)
        {
            vector<int> v;
            cout << "YES" << endl;
            int sum = 0, k = 2;
            for (int j = 1; j <= (m / 2); j++)
            {
                v.push_back(k);
                sum += k;
                k += 2;
            }
            // cout << sum << " ";
            int last = 0;
            k = 1;
            for (int j = 1; j < (m / 2); j++)
            {
                v.push_back(k);
                last += k;
                // cout << last << " ";
                k += 2;
            }

            v.push_back(sum - last);
            for (int j = 0; j < m; j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}