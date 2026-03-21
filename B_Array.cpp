#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  for (int i = 0; i < n; i++) {
    ll c = 0, d = 0;
    for (int j = i + 1; j < n; j++) {
        if (a[j] > a[i]) c++;
        if (a[j] < a[i]) d++;
    }
    cout << max(c,d) << " ";
  }
  cout << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}