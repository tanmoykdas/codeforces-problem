#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int b[k];
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
        // int x;
        // cin>>x;
        s.insert(b[i]);
    }
    int a[n * k];
    for (int i = 0; i < n * k; i++)
    {
        a[i] = i + 1;
    }
    int y = 1;
    for (int i = 0; i < k; i++)
    {
        cout << b[i] << " ";
        int c = 0;
        for (int j = y; j <= n * k; j++)
        {
            if (s.count(j))
            {
                continue;
            }
            else
            {
                cout << j << " ";
                c++;
                y = j + 1;
            }
            if (c == (n - 1))
                break;
        }
        cout << endl;
    }
}