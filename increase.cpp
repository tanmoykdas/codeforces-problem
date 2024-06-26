#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n + 1];
        vector<int> v1, v2;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            v1.push_back(a[i]);
        }
        for (int i = 0; i < n + 1; ++i)
        {
            cin >> b[i];
            v2.push_back(b[i]);
        }
        int ans = 0, temp = 0;
        for (int i = 0; i < n; ++i)
        {
            if(a[i] <= b[n] && a[i] > temp)
            temp = a[i];
        }
        v1.push_back(temp);
        for(int i = 0; i < n + 1; i++)
        {
            ans += abs(v1[i] - v2[i]);
        }
        cout << ans << " ";
        if(v1[n] == v2[n])
        ans += 1;
        else
        ans += abs(b[n] - temp + 1);
        cout << ans << endl;
    }
}