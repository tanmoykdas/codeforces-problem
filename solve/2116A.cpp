#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = min(a, c);
    int y = min(b, d);
    // cout << x << " " << y << " ";
    if (x > y) cout << "Gellyfish\n";
    else if (y > x) cout << "Flower\n";
    else cout << "Gellyfish\n";
  }
  return 0;
}