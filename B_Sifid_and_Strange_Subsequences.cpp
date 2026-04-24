#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector <ll> a(n);
  for (auto& x : a) cin >> x;
  ll mx = *max_element(a.begin(), a.end());
  ll cnt = count(a.begin(), a.end(), mx);
  vector <ll> b;

  for (int i = 0; i < n; i++) {

    if ((mx - a[i]) <= mx) b.push_back(a[i]);
    cout << mx - a[i] << " ";
  }
  cout << endl;
  for (auto x : b) cout << x << " ";
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}