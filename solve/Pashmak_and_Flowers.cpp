#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (auto &x : a)
        cin >> x;
    long long mx = *max_element(a, a + n);
    long long mn = *min_element(a, a + n);
    long long c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == mx)
        c1++;
        if(a[i] == mn)
        c2++;
    }
    long long ans;
    ans = c1 * c2;
    if(mx == mn)
    ans = (n * (n - 1)) / 2;
    cout << mx - mn << " " << ans;
    return 0;
}