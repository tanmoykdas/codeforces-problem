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
        int a[n];
        for (auto &x : a)
            cin >> x;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                mp[a[i]] = 0;
            else
                mp[a[i]] = 1;
        }

        vector<int> v;
        bool flag = true;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (flag) {
                v.push_back(it->second);
                flag = false;
            } else {
                if (v.back() != it->second) {
                    v.push_back(it->second);
                }
            }


        }
        if (v.size() == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}