#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto& x : a) cin >> x;
    sort(a, a + n);
    int c = 1, ans = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] <= k) {
            ++c;
        } else {
            c = 1;
        }
        ans = max(ans, c);
    }
    cout << n - ans << endl;
  }
  return 0;
}