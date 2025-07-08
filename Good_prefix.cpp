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
        long long sum = 0;
        int c = 0;
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum += a[i];
            if(sum - mx == mx)
            c++;
        }
        cout << c << endl;
    }
    return 0;
}