#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll x, y; 
  cin >> x >> y;
  if (x % 2 == 1 && y % 2 == 1) cout << "NO\n";
  else cout << "YES\n";
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}