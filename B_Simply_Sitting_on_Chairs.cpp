#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector <ll> a(n); for (auto& x : a) cin >> x;

  ll mn = LLONG_MAX, c = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] <= i + 1) c++;
  }
  cout << c << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}