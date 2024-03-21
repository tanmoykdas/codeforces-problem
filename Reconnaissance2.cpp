#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = 100000, in1, in2;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i+1]) < min)
        {
            min = abs(a[i] - a[i + 1]);
            in1 = i;
            in2 = i + 1;
        }
    }
    if(abs(a[n-1] - a[0]) < min)
    {
        in1 = n - 1;
        in2 = 0;
    }
    cout << in1 + 1 << " " << in2 + 1;
}