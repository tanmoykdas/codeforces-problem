#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll x, y; cin >> x >> y;
  ll dif = y - x;
  if (dif > x) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}