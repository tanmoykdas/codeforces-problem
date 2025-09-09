#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int c = 0;
    while (n > 1) {
      n -= (k - 1);
      ++c;
    }
    cout << c << '\n';
  }
  return 0;
}