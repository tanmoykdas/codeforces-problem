#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++) cin >> a[i][j];
  
  map<ll, ll> mp;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++) mp[a[i][j]]++;
  if (n == 1) {
    cout << "NO\n";
    return;
  }
  vector<ll> v;
  for (auto x : mp) v.push_back(x.second);
  ll sum = 0;
  sort(v.begin(), v.end());
  if (v.size() >= n) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= (n - 1)) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
    }
  } else {
    ll sum = 0;
    for (int i = 0; i < v.size() - 1; i++) sum += v[i];
    cout << (sum >= n ? "YES\n" : "NO\n");
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