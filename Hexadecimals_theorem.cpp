#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if(n == 0)
    {
        cout << 0 << " " << 0 << " " << 0;
        return 0;
    }
    long long a[1000];
    long long b = 0, c = 1;
    a[0] = 0;
    a[1] = 1;
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