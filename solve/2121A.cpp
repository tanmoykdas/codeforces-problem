#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &v : a) cin >> v;
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    int left = x - mn;
    int right = mx - x;
    // cout << "Left: " << left << ", Right: " << right << "\n";
    if (left < 0 || right < 0) {
        if (left < 0) cout << mx - x << "\n";
        else cout << x - mn << "\n";
        continue;
    }
    if (left < right) cout << (left * 2) + right << "\n";
    else if (left > right) cout << (right * 2) + left << "\n";
    else cout << left * 3 << "\n";
  }
  return 0;
}