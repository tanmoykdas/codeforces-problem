#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = n; i > m; i--) {
        cout << i << " ";
    }
    for (int i = 1; i <= m; i++) {
        cout << i << " ";
    }
    cout << '\n';
  }
  return 0;
}