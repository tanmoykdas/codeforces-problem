#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main () {
    int t;
    cin >> t;
    while(t--) {
        ll n, m, k, r;
        cin >> n >> m >> k;
        r = n;
        r += m / 3;
        if (m % 3 > 0)
        {
            ll temp = 3 - (m % 3);
            if (temp <= k)
            {
                r += 1;
                k -= (3 - (m % 3));
            }
            else {
                cout << -1 << endl;
                continue;
            }
        }
        if (k > 3){
            r += (k / 3);
            if(k % 3 != 0)
                r += 1;
        }
        else if(k <= 3 && k != 0) 
            r += 1;
        cout << r << endl;
    }
    return 0;
}