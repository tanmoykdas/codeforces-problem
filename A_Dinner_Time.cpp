#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if (p > n) {
        cout << "NO\n";
        continue;
    }
    if (n % p == 0) {
        int part;
        part = n / p;
        cout << (part * q == m ? "YES\n" : "NO\n");
    } else cout << "YES\n";
  }
  return 0;
}