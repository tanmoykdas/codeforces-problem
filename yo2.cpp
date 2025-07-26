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
    if (n > 3) {
        int e1;
        if (n % 2 == 0) e1 = n;
        else e1 = n - 1;
        for (int i = 1; i <= n; i++) {
            if (i == 2 || i == e1) continue;
            else cout << i << " ";
        }
        cout << 2 << " " << e1 << endl;
    } else cout << -1 << endl;
  }
  return 0;
}