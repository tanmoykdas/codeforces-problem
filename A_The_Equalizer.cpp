#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, k; cin >> n >> k;
  vector <ll> a(n);
  for (auto& x : a) cin >> x;
  ll sum = 0;
  for (auto x : a) sum += x;
  if (sum % 2) {
    cout << "YES\n";
  } else {
    sum += (n * k);
    if (sum % 2) cout << "NO\n";
    else cout << "YES\n";
  }
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}