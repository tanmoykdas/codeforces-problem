#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n + 1];

        for (auto& x:a) cin >> x;
        for (auto& x:b) cin >> x;
        
        long long sum = 0;
        int mxx = 0, dif = INT_MAX;
        bool con = false;
        for (int i = 0; i < n; i++) {
            int dif1 = abs(a[i] - b[n]);
            int dif2 = abs(b[i] - b[n]);
            if(dif1 < dif){
                dif = dif1;
                mxx = a[i];
            }
            if(dif2 < dif){
                dif = dif2;
                mxx = b[i];
            }
            sum += abs(a[i] - b[i]);

            int mx = max(a[i], b[i]);
            int mn = min(a[i], b[i]);
    
            if(b[n] <= mx && b[n] >= mn)
                con = true;
            // cout << mx << " " << mn << " " << b[n] << endl;
        }
        // cout << con << " " << mxx << endl;
        if(con)
            cout << sum + 1 << endl;
        else
            cout << sum + abs(b[n] - mxx) + 1 << endl;
    }
    return 0;
}