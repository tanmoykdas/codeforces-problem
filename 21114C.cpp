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
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        vector<int> b;
        b.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] > b.back() + 1)
                b.push_back(a[i]);
        }

        cout << b.size() << endl;
        a.clear();
        b.clear(); 
    }
    return 0;
}