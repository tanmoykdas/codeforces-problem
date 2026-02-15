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
    int a[n];
    bool ok = false;
    for (auto& x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == 67) ok = true;
    }
    cout << (ok ? "YES" : "NO") << endl;
  }
  return 0;
}