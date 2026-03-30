#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, m; cin >> n >> m;
  ll ans = abs(n - m);
  if (ans == 0) cout << 1 << endl;
  else cout << ans << endl;

  for (int i = 0; i < n; i++) {
    cout << 1 << " ";
  }

  for (int i = 0; i < m; i++) {
    cout << -1 << " ";
  }

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