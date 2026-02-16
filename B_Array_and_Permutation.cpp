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
    vector<int> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    bool ok = true;
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            if (b[i] == a[i] || b[i] == a[i - 1] || b[i] == b[i - 1]) {
                continue;
            } else {
                ok = false;
                break;
            }
        } else if (i == 0) {
            if (b[i] == a[i] || b[i] == a[i + 1] || b[i] == b[i + 1]) {
                continue;
            } else {
                ok = false;
                break;
            }
        } else {
            if (b[i] == a[i] || b[i] == a[i + 1] || b[i] == a[i - 1] || b[i] == b[i + 1]) {
                continue;
            } else {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";
  }
  return 0;
}