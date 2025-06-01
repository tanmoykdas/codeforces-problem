#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (m > n)
        cout << -1;
    else if (m == n)
        cout << m;
    else
    {
        int f = (n - m);
        int s;
        if (f % 2 == 0)
        s = f / 2;
        else 
        s = (f / 2) + 1;
        
    }
}