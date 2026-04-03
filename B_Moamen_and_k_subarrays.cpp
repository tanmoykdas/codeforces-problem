#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, k; cin >> n >> k;
  vector <ll> a(n); for (auto& x : a) cin >> x;

  vector <ll> b = a; sort(b.begin(), b.end());

  map <ll, ll> mp; 
  for (int i = 0; i < n; i++) mp[a[i]] = i;

  int req = n;
  for (int i = 0; i + 1 < n; i++) {
    ll x = mp[b[i]];
    ll y = mp[b[i + 1]];
    if (y - x == 1) req--;
  }
  cout << (req <= k ? "Yes\n" : "No\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}