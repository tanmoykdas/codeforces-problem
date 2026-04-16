#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, m; cin >> n >> m;
  vector <ll> a(n); for (auto& x : a) cin >> x;
  
  ll mx = 0, c = 1;

  for (int i = 0; i + 1 < n; i++) {
    if (a[i] == a[i + 1]) c++;
    else c = 1;
    mx = max(mx, c);
  }
  cout << (mx < m ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}