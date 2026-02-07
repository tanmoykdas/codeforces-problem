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
    for (auto& x : a) cin >> x;
    vector<int> b(a, a + n);
    sort(b.begin(), b.end());
    bool sort = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            sort = false;
            break;
        } 
    }
    int mx = 0;
    for (int i = n - 1; i >= 0; i--) {
        int temp = abs(b[i] - a[i]);
        mx = max(mx, temp);
        // cout << b[i] << " " << a[i] << endl;
    }
    // cout << endl;
    if (sort) cout << -1 << endl;
    else cout << mx << endl;
  }
  return 0;
} 