#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; 
  cin >> n;
  
  vector<ll> a(n), b, c;
  for (auto& x : a) cin >> x;

  ll mn = LLONG_MAX, mx = LLONG_MIN;

  for (int i = 0; i < n; i++) {
    mn = min(mn, a[i]);
    b.push_back(mn);
  }

  for (int i = n - 1; i >= 0; i--) {
    mx = max(mx, a[i]);
    c.push_back(mx);
  }
  reverse(c.begin(), c.end());

  for (int i = 0; i < n; i++) {
    if (a[i] == b[i] || a[i] == c[i]) cout << 1;
    else cout << 0;
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while (tt--) solve();
  return 0;
}