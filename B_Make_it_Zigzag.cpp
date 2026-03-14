#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  sort(a.begin(), a.end());
  ll ans = 0;
  vector<ll> v;
  for (int i = 0; i < n; i++) {
    if (i % 2) v.push_back(a[i]);
    else v.push_back(a[i] - i - 1);
  }
  for (auto x : a) cout << x << " ";
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}