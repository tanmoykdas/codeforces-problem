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
    vector<int> a(n), b(n), c;
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int mx = 0, mx_in = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] > mx) {
        mx = a[i];
        mx_in = i;
        c.push_back(a[i] + b[0]);
      }
      else if (b[i] > mx) {
        mx = b[i];
        mx_in = i;
        c.push_back(b[i] + a[0]);
      } else if (a[i] == b[i]) {
        c.push_back(max((a[i] + b[0]), (b[i] + a[0])));
      } else {
        c.push_back(max((a[mx_in] + b[i - mx]), (b[mx_in], a[i - mx_in])));
      }
    }

    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
  }
  return 0;
}