#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, x, y;
    cin >> a >> x >> y;
    int mn1 = abs(x - a);
    int mn2 = abs(y - a);
    bool ans = false;
    for (int i = 1; i <= 100; i++) {
        int mm1 = abs(x - i);
        int mm2 = abs(y - i);
        if (mm1 < mn1 && mm2 < mn2) {
            ans = true;
            break;
        }
    }
    cout << (ans ? "YES\n" : "NO\n");
  }
  return 0;
}