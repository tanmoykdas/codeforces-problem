#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    ll n, h, k;
    cin >> n >> h >> k;
    ll a[n];
    for (auto& x : a) cin >> x;
    ll sum = 0;
    for (auto x : a) sum += x;
    if (sum == h) cout << n << endl;
    else if (h % sum == 0) {
      ll cycle = h / sum;
      ll ans = (cycle * n) + ((cycle - 1) * k);
      cout << ans << endl;
    } else {
      ll need = h / sum;
      ll c = h % sum;
      ll mx[n], mn[n];
      ll temp = LLONG_MAX;
      for (int i = 0; i < n; i++) {
        temp = min(temp, a[i]);
        mn[i] = temp;
      }
      temp = 0;
      for (int i = n - 1; i >= 0; i--) {
        temp = max(a[i], temp);
        mx[i] = temp;
      }
      ll in = n;
      ll sum2 = 0;
      for (int i = 0; i < n - 1; i++) {
        sum2 += a[i];
        if (sum2 >= c || sum2 - mn[i] + mx[i + 1] >= c) {
          in = i + 1;
          break;
        }
      }
      ll time = (need * n) + (need * k) + in;
      cout << time << endl;
    }
  }
  return 0;
}