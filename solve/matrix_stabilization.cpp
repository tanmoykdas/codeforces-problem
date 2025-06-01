#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m], b[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        bool con;
        do
        {
            con = false;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                {
                    int top = (i > 0) ? a[i - 1][j] : 0;
                    int left = (j > 0) ? a[i][j - 1] : 0;
                    int bottom = (i < n - 1) ? a[i + 1][j] : 0;
                    int right = (j < m - 1) ? a[i][j + 1] : 0;

                    int max_neighbor = max({top, bottom, left, right});
                    if (a[i][j] > max_neighbor)
                    {
                        a[i][j] = max_neighbor;
                        con = true;
                    }
                }
        } while (con);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}