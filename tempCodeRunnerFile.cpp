#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << 0 << " " << 0 << " " << 0;
        return 0;
    }
    int a[n];
    int b = 0, c = 1;
    a[0] = 0;
    a[1] = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        a[i + 2] = b + c;
        b = c;
        c = a[i + 2];
        if (a[i + 2] > n)
        {
            cout << "I'm too stupid to solve this problem";
            return 0;
        }
        if (a[i + 2] == n)
        {
            cout << 0 << " " << 0 << " " << a[i + 2];
            return 0;
        }
    }
}