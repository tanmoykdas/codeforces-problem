#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                ++c;
                if (a[i][j] == '.')
                {
                    if (c % 2 != 0)
                        a[i][j] = 'W';
                    else
                        a[i][j] = 'B';
                }
            }
            else
            {
                ++c;
                if (a[i][j] == '.')
                {
                    if (c % 2 != 0)
                        a[i][j] = 'B';
                    else
                        a[i][j] = 'W';
                }
            }
        }
        c = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}