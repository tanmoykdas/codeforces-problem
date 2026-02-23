#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
        {
            if (s[0] == s[1])
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            int c = 0;
            int ind = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    ind = i + 1;
                    break;
                }
            }
            int cnt = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != s[i + 1])
                    cnt++;
            }
            if (!ind) cout << ++cnt << endl;
                else
                {
                    string t = s.substr(0, ind);
                    string u = s.substr(ind);
                    t = u + t;
                     c = 0;
                    for (int i = 0; i < n - 1; i++)
                    {
                        if (t[i] != t[i + 1])
                            c++;
                    }
                    cout << c + 1 << endl;
                }
        }
    }
    return 0;
}