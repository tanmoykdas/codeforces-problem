#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<ll> a(n); for (auto& x : a) cin >> x;

  sort(a.begin(), a.end());
  vector<ll> b;
  
  set<ll> s;
  vector<ll> xx;
  for (int i = 0; i < n - 1; i++) {
    if (!s.count(a[i])) s.insert(a[i]);
    else xx.push_back(a[i]);
  }

  b.push_back(a[n - 1]);
  for (auto x : s) b.push_back(x);
//   sort(xx.rbegin(), xx.rend());
  for(auto x : xx) b.push_back(x);

//   for (auto x : b) cout << x << " ";
//   cout << endl;

  ll c = 0, mx = 0, ans = 0;
  set<ll> st;
  for (int i = 0; i < n; i++) {
    mx = max(mx, b[i]);
    st.insert(b[i]);
    while (st.count(c)) ++c;  
    ans += (mx + c); 
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}