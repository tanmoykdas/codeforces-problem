#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, c, k;
  cin >> n >> c >> k;
  ll a[n];
  
  for (auto& x : a) cin >> x;
  sort(a, a + n);
//   for (auto x : a) cout << x << " ";
//   cout << endl;
  for (int i = 0; i < n; i++) {
    if (a[i] > c) break;
    else {
        if (k) {
            ll dibo = k;
            ll nebo = (c - a[i]);
            // cout << nebo << endl;
            c += (a[i] + min(dibo, nebo));
            k -= min(dibo, nebo);
        } else {
            if (a[i] <= c) c += a[i];
            else break;
        }
    }
  }
  cout << c << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}