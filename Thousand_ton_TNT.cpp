#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(auto& x:a) cin >> x;
        long long ans = 0;
        for(int k = 1; k <= n ; k++)
        {
            if(n % k == 0)
            {
                // cout << k << endl;
                long long  mx = -1e18, mn = 1e18;
                long long  sum = 0;
                for(int i = 0; i < n; i = i + k)
                {
                    sum = 0;
                    int j = i, c = 0;
                    while(c < k)
                    {
                        sum += a[j];
                        j++;
                        c++;
                    }
                    mx = max(sum, mx);
                    mn = min(sum, mn);
                    // cout << mx << " " << mn << endl;
                }
                ans = max(ans, mx - mn);
            }
        }
        cout << ans << endl;
    }
    return 0;
}