#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b + 1) {
      cout << -1 << endl;
      continue;
    }
    if (a == b + 1 && a % 2 == 0) {
      cout << -1 << endl;
      continue;
    }
    if (a == b + 1 && a % 2 != 0) {
      cout << y << endl;
      continue;
    }
    int val = 0;
    for (int i = a; i < b; i++) {
      if (i % 2 == 0) {
        if (y <= x) val += y;
        else val += x;
      }
      else val += x;
    }
    cout << val << endl;
  }
  return 0;
}