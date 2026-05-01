#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> a(n); for (auto& x : a) cin >> x;

  vector<ll> a6, a2, a3, b;
  for (auto x : a) {
    if (x % 6 == 0) a6.push_back(x);
    else if (x % 2 == 0) a2.push_back(x);
    else if (x % 3 == 0) a3.push_back(x);
    else b.push_back(x);
  }
  for (auto x : a6) cout << x << " ";
  for (auto x : a2) cout << x << " ";
  for (auto x : b) cout << x << " ";
  for (auto x : a3) cout << x << " ";
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