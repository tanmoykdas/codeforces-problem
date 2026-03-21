#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  vector<ll> b(a.begin(), a.end());
  for (int i = 1; i < n - 1; i++) {
    if ((a[i] + a[i + 1]) > a[i - 1] && a[i] != 0) {
        a[i] += a[i + 1];
        a[i + 1] = 0;
        break;
    }
  }
//   for (auto x : a) cout << x << " ";
//   cout << endl;
  ll sum = 0, mn = LLONG_MAX;
  for (int i = 0; i < n; i++) {
    mn = min(mn, a[i]);
    sum += mn;
    // cout << mn << " ";
  }
//   cout << endl;
  if (n >= 2) {
    ll summ = 0;
    b[0] = b[0] + b[1];
    b[1] = 0;
    // for (auto x : b) cout << x << " ";
    // cout << endl;
    mn = LLONG_MAX;
    for (auto x : b) {
        mn = min(x, mn);
        summ += mn;
    }
    cout << min(sum, summ) << endl;
  } else cout << sum << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}