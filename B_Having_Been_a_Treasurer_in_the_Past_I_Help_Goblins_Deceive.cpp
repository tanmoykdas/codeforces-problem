#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    char c[n];
    for (auto &x : c) cin >> x;
    long long c1 = 0, c2 = 0;
    for (auto x : c) {
        if ( x == '-') c1++;
        else c2++;
    }
    // cout << c1 << " " << c2;
    if (c1 % 2 == 0){
        long long ans;
        ans = c1/2 * c2 * c1/2;
        cout << ans << endl;
    } 
    else if (c1 >= 3) {
        long long ans;
        ans = c1/2 * c2 * ((c1/2) + 1);
        cout << ans << endl;
    }
    else cout << 0 << endl;
  }
  return 0;
}