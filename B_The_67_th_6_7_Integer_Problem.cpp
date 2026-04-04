#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  vector <ll> a(7); for (auto& x : a) cin >> x;
  sort(a.begin(), a.end());
  for (int i = 0; i < 6; i++) a[i] *= -1;
  ll sum = 0;
  for (auto x : a) sum += x;
  cout << sum << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}