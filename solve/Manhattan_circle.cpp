#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        char a[n + 1][m + 1];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int p1 = 0, p2 = 0, c = 0, mx = 0;
        bool con = true;
        for(int i = 0; i < n; i++)
        {
            c = 0;
            for(int j = 0; j < m; j++)
            {
                if(a[i][j] == '#')
                c++;
                if(con == true && a[i][j] == '#')
                p2 = j + 1;
            }
            if(c > mx)
            {
                mx = c;
                p1 = i + 1;
            }
        }
        cout << p1 << " " << p2 << endl;
    }
    return 0;
}