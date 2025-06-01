#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
        if(a[i] == 1)
        c++;
    }
    cout << n - c << endl;
    int k = 1;
    int d = 0;
    for (int i = 0; i < n; i++)
    {         
        for (int j = 0; j < m; j++)
        {
            if(b[j] == k)
            d++;
        }
        if(d==0)
        cout << 1 << " " << k << endl;

        k++;
        d = 0;
    }
}