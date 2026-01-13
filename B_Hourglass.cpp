#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int s, k, m;
    cin >> s >> k >> m;
    int bar = m / k;
    int bad = m % k;
    if (k > m) cout << max(s - m, 0) << endl;
    else if (k == m) {
      cout << min (s, k) << endl;
    } else {
      // cout << bar << " " << bad << endl;
      if (bar % 2) {
        cout << k - bad << endl;
      } else {
        cout << s - bad << endl;
      }
    }
  }
  return 0;
}