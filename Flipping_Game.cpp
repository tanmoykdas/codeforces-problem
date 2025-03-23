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

    int c1 = 0, c2 = 0, max = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            c1++;
        }
        else if(a[i] == 0)
        {
            c2++;
        }
        
    }
}
