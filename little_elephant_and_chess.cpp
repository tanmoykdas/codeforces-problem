#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool ans = true;
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        int b = 0, w = 0, t = 0, o = 0, c = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'B')
                b++;
            if (s[j] == 'W')
                w++;
            if (j == (s.size() - 1))
                c += 0;
            else
            {
                if (s[j] == s[j + 1])
                {
                    c++;
                    if (c == 1)
                        t++;
                    else
                    o++;
                }
                else
                c = 0;
            }
        }
        //cout << b << " " << w << " " << t << " " << o << endl;
        if(t >= 2 || o != 0 || b != 4 || w != 4)
        ans = false;
    }
    if(ans) 
        cout << "YES";
        else
        cout << "NO";
    return 0;
}