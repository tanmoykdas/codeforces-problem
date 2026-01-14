#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int left = k - 1, right = n - k;
    int l = 0, r = 0;
    while (1) {
      int c = 0;
      if (l < left && l + r + max(l + 1, r) <= m) {
        l++;
        c++;
      }
      if (r < right && l + r + max(l, r + 1) <= m) {
        r++;
        c++;
      }
      if (c == 0) {
        break;
      }
    }
    cout << l + r + 1 << endl;
  }
  return 0;
}