#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;
    int m = a / b;
    if (m >= n || b >= a) cout << 1 << endl;
    else cout << 2 << endl;
  }
  return 0;
}