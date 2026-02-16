#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n], b[n];
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (i == 0) {
                if (b[i] != b[i + 1]) {
                    ok = false;
                    break;
                }
            } else if (i == n - 1) {
                if (b[i] != b[i - 1]) {
                    ok = false;
                    break;
                }
            } else {
                if (b[i] != b[i - 1] && b[i] != b[i + 1]) {
                    ok = false;
                    break;
                }
            }
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";
  }
  return 0;
}