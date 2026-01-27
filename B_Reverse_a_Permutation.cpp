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
            cin >> x;
        int index;
        int mx = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
                index = i;
        }
        if (a[0] != mx)
        {
            for (int i = index; i >= 0; i--)
                cout << a[i] << " ";
            for (int i = index + 1; i < n; i++)
                cout << a[i] << " ";
            cout << "\n";
        } else {
            int c = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == mx) {
                    cout << a[i] << " ";
                    ++c;
                }
                else break;
            }
            mx = *max_element(a.begin() + c, a.end());
            cout << mx << " ";
        }
    }
}