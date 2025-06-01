#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m % 2 == 0)
        {
            if (n == 2)
            {
                cout << "YES" << endl;
                cout << "AA";
            }
            else
            {
                char ascii = 65;
                cout << "YES" << endl;
                for (int i = 1; i <= (m); i++)
                {
                    cout << ascii;
                    if(i % 2 == 0)
                    ascii++;
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}