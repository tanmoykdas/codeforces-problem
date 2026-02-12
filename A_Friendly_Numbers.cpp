#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int digit_sum(ll x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    int c = 0;
    for (ll i = n; i <= n + 90; i++) {
      if (i - digit_sum(i) == n) ++c;
    }
    cout << c << endl;
  }
  return 0;
}