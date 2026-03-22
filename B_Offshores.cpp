#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, x, y;
  cin >> n >> x >> y;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  ll sum = 0;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    ll temp = a[i] / x;
    ll val = temp * y;
    v[i] = val;
    sum += val;
  }
  ll mx = 0;
  for (int i = 0; i < n; i++) {
    ll now = sum - v[i] + a[i];
    mx = max(mx, now);
  }
  cout << mx << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}