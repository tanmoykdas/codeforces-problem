#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, k; cin >> n >> k;
  vector <ll> a(n + 2); for (int i = 1; i <= n; i++) cin >> a[i];
  ll x; cin >> x;

  a[0] = a[n + 1] = a[x];
  ll c = 0, d = 0;

  for (int i = 0; i < x; i++) {
    if (a[i] != a[i + 1]) c++;
  }

  for (int i = x; i < n + 1; i++) {
    if (a[i] != a[i + 1]) d++;
  }

  cout << max(c, d) << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}