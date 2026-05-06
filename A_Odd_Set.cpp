#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  n *= 2;
  vector<ll> a(n); for (auto& x : a) cin >> x;

  // set<ll> st(a.begin(), a.end());
  // if (st.size() < n) cout << "No\n";
  // else {
    ll c = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2) c++;
      else c--;
    }
    cout << (c ? "No\n" : "Yes\n");
  // }
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}