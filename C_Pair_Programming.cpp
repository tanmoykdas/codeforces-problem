#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll k, n, m;
  cin >> k >> n >> m;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  ll i = 0, j = 0, c = k;
  vector<ll> ans;

  while (i < n || j < m) {
    if (i < n && a[i] == 0) {
      ans.push_back(0);
      c++;
      i++;
    } else if (j < m && b[j] == 0) {
      ans.push_back(0);
      c++;
      j++;
    } else if (i < n && a[i] <= c) {
      ans.push_back(a[i]);
      i++;
    } else if (j < m && b[j] <= c) {
      ans.push_back(b[j]);
      j++;
    } else {
      cout << -1 << '\n';
      return;
    }
  }

  for (auto x : ans) cout << x << " ";
  cout << '\n';
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}