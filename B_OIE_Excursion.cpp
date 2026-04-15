#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, m; cin >> n >> m;
  vector <ll> a(n); for (auto& x : a) cin >> x;
  
  ll c = (m - a[0]);

  for (int i = 0; i < n; i++) {
    a[i] = (a[i] + c) % m;
  }
  for (auto x : a) cout << x << " ";
  cout << endl;
  for (int i = 0; i < n; i++) {
    a[i] = (a[i] + i + 1) % (m + 1);
  }
  for (auto x : a) cout << x << " ";
  cout << endl;
  bool f = true;
  for (auto x : a) {
    if (x == 0) f = false;
  }
  cout << (f ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}