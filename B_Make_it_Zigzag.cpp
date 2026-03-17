#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  ll mx = 0;
  vector<ll> b(n);
  for (int i = 0; i < n; i++) {
    mx = max(a[i], mx);
    b[i] = mx;
  }
  ll sum = 0;

  for (int i = 1; i < n; i += 2) {
    if (b[i] > a[i]) a[i] = b[i];
    if (i == (n - 1)) {
      if (a[i - 1] >= a[i]) {
        sum += (a[i - 1] - (a[i] - 1));
        a[i - 1] = (a[i - 1] - (a[i] - 1));
      }a[i - 1] = (a[i - 1] - (a[i] - 1));
    } else {
      if (a[i - 1] >= a[i]) {
        sum += (a[i - 1] - (a[i] - 1));
        a[i - 1] -= (a[i - 1] - (a[i] - 1));
      }
      if (a[i + 1] >= a[i]) {
        sum += (a[i + 1] - (a[i] - 1));
        a[i + 1] -= (a[i + 1] - (a[i] - 1));
      }
    }
  }
  cout << sum << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}