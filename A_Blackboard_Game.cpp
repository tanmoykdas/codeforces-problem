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
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 4 == 0) c0++;
        else if (i % 4 == 1) c1++;
        else if (i % 4 == 2) c2++;
        else c3++;
    }
    if (c0 != c3 || c1 != c2) cout << "Alice\n";
    else cout << "Bob\n";
  }
  return 0;
}