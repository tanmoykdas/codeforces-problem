#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;

  vector<ll> v;
  v.push_back(a[0]);
  for (int i = 1; i < n; i++) {
    if (a[i] >= v.back()) v.push_back(a[i]);
  }
  cout << v.size() << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}