#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ca = 0, cb = 0, result = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A')
            ++ca;
            
            if(ca != 0 && s[i] == 'B')
            ++cb;
            if(ca != 0 && cb != 0)
            {
                result += ca;
                ca = 1;
                cb = 0;
            }

        }
        cout << result << '\n';
    }
    return 0;
}