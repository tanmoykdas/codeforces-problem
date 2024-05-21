#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long a, b, x, y, n, m;
        cin >> a >> b >> x >> y >> n;
        m = n;
        long long t1, t2, t3, t4, a1, a2;
        long long need = a - x;
        if(need >= n) {
            t1 = a - n;
            n = 0;
            t2 = b;
        }
        else {
            t1 = a - need;
            n -= need;
            if(n >= (b - y))
            t2 = b - (b - y);
            else
            t2 = b - n;
            n = 0;
        }
        need = b - y;
        if(need >= m) {
            t4 = b - m;
            t3 = a;
        }
        else {
            t4 = y;
            m -= need;
            if(m >= (a - x))
            t3 = a - (a - x);
            else
            t3 = a - m;
        }
        a1 = t1 * t2;
        a2 = t3 * t4;
        cout << min(a1, a2) << endl;
    }
    return 0;
}