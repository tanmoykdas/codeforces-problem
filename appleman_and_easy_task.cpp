#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'o')
            {
                if (j < n - 1)
                {
                    if (a[i][j] == a[i][j + 1])
                        c++;
                }
                if (j >= 1)
                {
                    if (a[i][j] == a[i][j - 1])
                        c++;
                }

                if (i < n - 1)
                {
                    if (a[i][j] == a[i + 1][j])
                        c++;
                }
                if (i >= 1)
                {
                    if (a[i][j] == a[i - 1][j])
                        c++;
                }
            }
        }
        if(c % 2 != 0 && c > 0)
        ans = false;
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}