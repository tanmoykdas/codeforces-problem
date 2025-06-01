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
    int m = sqrt(n);
    if (m * m == n) {
        if (m == 0) cout << 0 << " " << 0 << endl;
        else cout << 1 << " " << m - 1 << endl;
    }
    else cout << -1 << endl;
  }
  return 0;
}