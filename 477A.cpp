#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  for (int i = 0 ;i < m; i++) {
    int x;
    cin >> x;
    if (x != 0) {
        cout << n % x << " ";
    } else {
        cout << "undefined ";
    }
  }
  return 0;
}