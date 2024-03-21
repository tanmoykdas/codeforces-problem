#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a[m];
        set <int> s;
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
            s.insert(a[j]);
        }
        int k = s.size();
        auto it = s.begin();
        if(k == m)
        {
            //int min = *min_element(a,a+n);
            //cout << k << " " << *it;
            if(a[0] == *it)
            cout << "Yes" << "\n";
            else
            cout << "No" << "\n";
        }
        else
        {
            //cout << k << " " << min;
            cout << "No" << "\n";
        }
    }
}