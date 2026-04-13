#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector <ll> a(n);
  for (auto& x : a) cin >> x;

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  

  set <ll> st(a.begin(), a.end());
  if (st.size() < n) cout << -1 << endl;
  else {
    for (auto x : a) cout << x << " ";
    cout << endl;
  }
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}