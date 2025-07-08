#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    char a[n][6];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5-1; j++)
        {
            if (a[i][j] == 'O' && a[i][j + 1] == 'O')
            {
                c++;
                a[i][j] = '+';
                a[i][j + 1] = '+';
                // j++;
            }
            if(c==1)
            break;
        }
        if (c >= 1)
        {
            cout << "YES";
            cout << "\n";
            break;
        }
    }
    if (c >= 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
       // return 0;
    }
    else
    {
        cout << "NO";
    }
}