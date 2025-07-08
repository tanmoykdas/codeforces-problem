#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        for(int j = 0; j < n; j ++)
        {
            cin >> a[j];
        }
        for(int j = 0; j < m; j ++)
        {
            cin >> b[j];
        }
        int c = 0;
        for(int j = 0; j < n; j ++)
        {
            for(int l = 0; l < m; l++)
            {
                if((a[j] + b[l]) <= k)
                c++;
            }
        }
        cout << c << endl;
    }
}