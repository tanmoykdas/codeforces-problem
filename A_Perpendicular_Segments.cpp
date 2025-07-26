#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x, y, k;
    cin >> x >> y >> k; 
    int sq = min(x, y);
    cout << "0 0 " << sq << " " << sq << endl;
    cout << 0 << " " << sq << " " << sq << " " << 0 << endl;
  }
  return 0;
}