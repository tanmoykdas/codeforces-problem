#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, x, y; cin >> n >> x >> y;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if (i == x || i == y) v.push_back(0);

        v.push_back(c);
    }
    if (y == n) v.push_back(0);
    for (auto x : v) cout << x << " ";
  }
  return 0;
}