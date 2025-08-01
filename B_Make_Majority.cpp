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
    vector<char> a(n), b;
    for (auto& x : a) cin >> x;
    b.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (b.back() != a[i]) b.push_back(a[i]);
        else {
            if (a[i] == '1') b.push_back(a[i]);
        }
    }
    int c0 = 0, c1 = 0;
    for (auto x : b) {
        if (x == '0') c0++;
        else c1++;
    }
    // for (auto x : b) cout << x << " ";
    cout << (c1 > c0 ? "Yes\n" : "No\n");
  }
  return 0;
}