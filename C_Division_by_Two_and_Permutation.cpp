#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> a(n); for (auto& x : a) cin >> x;
  vector<ll> b(a.begin(), a.end());

  for (int i = 0; i < n; i++)  {
    while (b[i] > n) {
        b[i] /= 2;
    }
  }
  sort(b.begin(), b.end());
  set<ll> st;
  for (auto x : b) st.insert(x);
  vector<ll> x, y;
  x.push_back(b[0]);
  for (int i = 1; i < n; i++) {
    if (x.back() != b[i]) x.push_back(b[i]);
    else y.push_back(b[i]);
  }
  for (int i = 0; i < y.size(); i++) {
    while(b[i]) {
        b[i] /= 2;
        if (st.count(b[i]) == 0 && b[i] != 0) {
            st.insert(b[i]);
            break;
        }
    }
  }
  cout << (st.size() == n ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}