#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        long long sq;
        sq = sqrt(m);
        if ((sq * sq) == m)
        {
            if (sq == 1)
                cout << "NO"
                     << "\n";
            else if (sq == 2)
                cout << "YES"
                     << "\n";
            else
            {
                long long sq2;
                sq2 = sqrt(sq);
                if (sq % 2 == 0)
                    cout << "NO"
                         << "\n";
                else
                {
                    int c = 0;
                    for (int j = 3; j <= sq2; j += 2)
                    {
                        if (sq2 % j == 0)
                        {
                            c++;
                            break;
                        }
                    }
                    if (c == 0)
                        cout << "YES"
                             << "\n";
                    else
                        cout << "NO"
                             << "\n";
                }
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}