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
    for (auto& x : a) cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (is_sorted(a.begin(), a.end())) {
      cout << "-1\n";
      continue;
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        ans = min(ans, max(a[i] - b[0], b[n - 1] - a[i]));
      }
    }
    cout << ans << "\n";
  }
  return 0;
}