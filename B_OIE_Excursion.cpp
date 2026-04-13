#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, m; cin >> n >> m;
  vector <ll> a(n); for (auto& x : a) cin >> x;
  ll c = 1;
  vector <ll> b(n);
  bool ans = true;
  for (int i = 0; i < n; i++) {
    ll pos = (a[i] + c) % m;
    b[i] = pos;
  }
//   for (auto x : b) cout << x << " ";
  for (int i = 0; i + 1 < n; i++) {
    if ((b[i] == b[i + 1]) && b[i] == 0) ans = false;
  }
  cout << (ans ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}