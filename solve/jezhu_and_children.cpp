#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float m;
    cin >> n >> m;
    int a[n], b[n];
    int max = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = *max_element(a, a + n);
    int min = ceil((float)mx / m) - 1;
    min *= m;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] - min;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        index = i + 1;
    }
    cout << index;
}