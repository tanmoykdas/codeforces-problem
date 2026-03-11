#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, p = 1;
  cin >> n;
  vector<ll> v;
  while (p < n) {
    p *= 10;
    if (n % (p + 1) == 0) {
        v.push_back(n / (p + 1));
    }
  }
  if (v.size()) {
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (auto x : v) cout << x << " ";
    cout << endl;
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