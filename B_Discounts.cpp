#include<bits/stdc++.h>
using namespace std;
     
using ll = long long;         

void solve() {
  ll n, k; cin >> n >> k;
  vector <int> a(n), b(k);
  for (auto& x : a) cin >> x;
  for (auto& x : b) cin >> x;

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  sort(b.begin(), b.end());

  vector <ll> c;
  ll sum = 0;
  for (int i = 0; i < k; i++) {
    sum += b[i];
    c.push_back(sum - 1);
  }
  
  ll cost = 0, in = 0;
  for (int i = 0; i < n; i++) {
    if (in < c.size() && i == c[in]) in++;
    else cost += a[i];
  }
  cout << cost << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}