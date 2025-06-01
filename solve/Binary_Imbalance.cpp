#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (int j = 0; j < m; j++)
        {
            if(s[j] == '0')
            c0++;
            else
            c1++;
        }
        if(c0 > c1)
        cout << "YES" << endl;
        else
        {
            int c = 0;
            for (int j = 0; j < m-1; j++)
            {
                if (s[j] != s[j + 1])
                c++;
            }
            if(c!=0)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
    }
}