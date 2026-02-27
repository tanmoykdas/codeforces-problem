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
    if (n == 1) {
        cout << 1 << endl;
        continue;
    }

    if (is_sorted(a, a + n)) cout << n << endl;
    else cout << 1 << endl;
  }
  return 0;
}