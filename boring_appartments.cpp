#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int d, l;
        d = int(s[0] - '0');
        l = s.size();
        int ans = (d - 1) * 10;
        for(int i = 1; i <= l; i++) {
            ans += i;
        }
        cout << ans << endl;
    }
    return 0;
}