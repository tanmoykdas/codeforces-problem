#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    int x1, y1, x2, y2;
    cin >> n;
    cin >> x1 >> y1 >> x2 >> y2;
    int v[n];
    for (auto &x : v) cin >> x;
    int dis;
    int a = pow(x2 - x1, 2);
    int b = pow (y2 - y1, 2);
    dis = sqrt(a + b);
    cout << dis << endl;
    long sum = 0;
    for (auto x : v) sum += x;
    cout << sum << endl;
    if (dis == 0) {
      int up = 0 + v[0];
      int down = 0;
      for (int i = 1; i < n; i++) {
        if (down <= up) down += v[i];
        else up += v[i];
      }
      cout << (up == down ? "Yes\n" : "No\n");
    } else {
      cout << (sum >= dis ? "Yes\n" : "No\n");
    }
  }
  return 0;
}