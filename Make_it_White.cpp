#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int c = 0, f, l;
        for(int j = 0; j < m; j++)
        {
            if(s[j] == 'B' && c == 0)
            {
                f = j + 1;
                c++;
            }
            if(s[j] == 'B')
            {
                l = j + 1;
            }
        }
        //cout << f << " " << l;
        cout << (l - f) + 1 << endl;
    }
}