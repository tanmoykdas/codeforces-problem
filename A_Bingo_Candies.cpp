#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  ll a[n][n];
  map<ll, ll> mp;
  ll mx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      mp[a[i][j]]++;
      mx = max(mx, mp[a[i][j]]);
    }
  }

  ll total = n * n;
  ll remain = total - mx;
  cout << (remain >= n ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}