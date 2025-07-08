#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if(n > 28)
        {
            n -= 26;
            if(n > 26)
            {
                
                n -= 26;
                cout << char(96 + n) << 'z' << 'z';
            }
            else
            {
                n -= 1;
                cout << 'a' << char(96 + n) <<'z';
            }
        }
        else if(n == 28)
        {
            cout << 'a' << 'a' << 'z';
        }
        else
        {
            cout << 'a' << 'a' << char(96 + (n - 2));
        }
        cout << "\n";
    }
}