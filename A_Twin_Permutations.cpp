#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  for (int i = 0; i < n; i++) cout << n + 1 - a[i] << " ";
  cout << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}