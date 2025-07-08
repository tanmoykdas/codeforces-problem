#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1 = 1, c2 = 0, up = 1,c = 1;
        for (int i = 1; i <= 2 * n; i++)
        {
            c++;

            if(c % 2 == 0)
            up++;

            for (int j = 1; j <= 2 * n; j++)
            {
                if (up % 2 != 0)
                {
                    if (c2 % 2 == 0)
                        c1++;
                    if (c1 % 2 == 0)
                        cout << '.';
                    else
                        cout << '#';
                    c2++;
                }
                else
                {
                    if (c2 % 2 == 0)
                        c1++;
                    if (c1 % 2 == 0)
                        cout << '#';
                    else
                        cout << '.';
                    c2++;
                }
            }
            c1 = 1;
            c2 = 0;
            cout << endl;
        }
    }
}