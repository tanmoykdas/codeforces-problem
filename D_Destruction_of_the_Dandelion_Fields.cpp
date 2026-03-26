#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector <int> a(n);
  for (auto& x : a) cin >> x;

  vector <int> odd, even;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2) odd.push_back(a[i]);
    else even.push_back(a[i]);
  }
  if (odd.size()) {
    ll sum = 0;
    for (int i = 0; i < even.size(); i++) {
        sum += even[i];
    }
    sort (odd.begin(), odd.end());
    reverse (odd.begin(), odd.end());
    for (int i = 0; i < (odd.size()+ 1) / 2; i++) {
        sum += odd[i];
    }
    cout << sum << endl;
  } else cout << 0 << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}