#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    bool flag = false;
    if (x % 2 == 0 && y % 1 == 0) flag = true;
    if (x % 3 == 0 && y  == 0) flag = true;
    if (x % 4 == 0 && y % -1 == 0) flag = true;
    cout << (flag ? "YES" : "NO") << endl;
  }
  return 0;
}