#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    int s = 0;
    for (int i = 0; i < t; i++)
    {
        int up = 0, lw = 0, rn = 0, ln = 0;
        for (int j = 0; j < t; j++)
        {

            if (a[j] > a[i] && b[j] == b[i])
                rn++;
            else if (a[j] < a[i] && b[j] == b[i])
                ln++;
            else if (a[j] == a[i] && b[j] < b[i])
                lw++;
            else if (a[j] == a[i] && b[j] > b[i])
                up++;

            if (up != 0 && lw != 0 && rn != 0 && ln != 0)
            {
                s++;
                //cout << a[i] << " " << b[i] << endl;
                break;
            }
        }
    }
    cout << s;
}