#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int a[m];
        for(auto& x:a) cin >> x;
        string c;
        cin >> c;
        set<int> st;
        for(int i = 0; i < m; i++) st.insert(a[i]);
        sort(c.begin(), c.end());
        int i = 0;
        for(auto it = st.begin(); it != st.end(); it++)
        {
            s[*it - 1] = c[i];
            i++;
        }
        cout << s << endl;
    }
    return 0;
}