#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> a(n); for (auto& x : a) cin >> x;

  for (int i = n - 2; i >= 0; i--) {
    if (a[i + 1] > 0) a[i] += a[i + 1];
  }
  ll k = 0;
  for (int i = 0; i < n; i++) if (a[i] > 0) k++;
  cout << k << endl; 
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}