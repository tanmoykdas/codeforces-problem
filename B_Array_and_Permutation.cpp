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
    vector<int> a(n);
    vector<int> b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (b[i] == a[i] || b[i] == a[i + 1]) continue;
            else {
                    ok = false;
                    break;
            }
        } else if (i == n - 1) {
            if (b[i] == a[i] || b[i] == a[i - 1]) continue;
            else {
                ok = false;
                break;  
            }
        } else {
            if (count(a.begin() + i, a.end(), b[i])) continue;
            else {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
  }
  return 0;
}