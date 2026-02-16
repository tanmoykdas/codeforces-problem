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
    vector<int> c;
    c.push_back(b[0]);
    for (int i = 1; i < n; i++) {
        if (c.back() != b[i]) c.push_back(b[i]);
    }
    int cnt = 0;
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (d < c.size() && c[d] == a[i]) {
            cnt++;
            d++;
        }
    }
    if (cnt == c.size()) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}