#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int res = 1;
        bool con = false;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] != s[i + 1])
            res++;
            con |= (s[i] == '0' && s[i + 1] == '1');
        }
        cout << res - con << endl;
    }
    return 0;
}