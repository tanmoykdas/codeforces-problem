#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll m;
        string s, r;
        cin >> m >> s;
        r = s;
        reverse(r.begin(), r.end());
        if (r >= s)
            cout << s << endl;
        else
        cout << r << s << endl;
    }
}