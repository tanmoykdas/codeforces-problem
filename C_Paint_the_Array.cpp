#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector <ll> a(n);
  for (auto& x : a) cin >> x;
  ll x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2) x = gcd(x, a[i]);
    else y = gcd(y, a[i]);
  }
  ll c = 0;
  if (y == 1) goto th;
  for(int i = 1; i < n; i += 2) {
    if (a[i] % y == 0) c++;
  }
  if (!c) {
    cout << y << endl;
    return;
  }
  th:
  c = 0;
  if (x == 1) goto print;
  for(int i = 0; i < n; i += 2) {
    if (a[i] % x == 0) c++;
  }
  if (!c) {
    cout << x << endl;
    return;
  }
  print:
  cout << 0 << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}