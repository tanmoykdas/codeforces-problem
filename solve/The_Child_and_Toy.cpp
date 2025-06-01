#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int n1, n2, sum = 0;
    for (int j = 0; j < m; j++)
    {
        cin >> n1 >> n2;
        sum += min(a[n1 - 1], a[n2 - 1]);
    }
    cout << sum;
}