#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if(j == 0)
                cout << j;
                else
            cout << " " << j;
            p = j;
        }
        for (int j = --p; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if(j == 0)
                cout << j;
                else
            cout << " " << j;
            p = j;
        }
        for (int j = --p; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}