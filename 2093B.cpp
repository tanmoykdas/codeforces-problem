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
        string s;
        cin >> s;
        bool flag = true;
        int c = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(flag){
                if(s[i] == '0') c++;
                else flag = false;
            } else {
                if(s[i] != '0') c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}