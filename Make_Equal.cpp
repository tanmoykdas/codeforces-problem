#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll m, sum = 0;
        cin >> m;
        ll a[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        ll temp = 0, avarage = sum / m, c = 0;
        //cout << avarage << " ";
        for (int j = 0; j < m; j++)
        {
            if (a[j] > avarage)
            {
                temp += (a[j] - avarage);
                a[j] = avarage;
            }
            else if (a[j] < avarage)
            {
                //cout << temp << " ";
                if((avarage - a[j]) > temp)
                {
                    c++;
                    break;
                }
                else
                {
                    temp -= (avarage - a[j]);
                    a[j] = avarage;
                }
            }
        }
        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}