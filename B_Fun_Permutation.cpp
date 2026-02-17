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
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    if (n == 2) cout << 1 << " " << 2 << endl;
    else if (n == 3) cout << 1 << " " << 2 << " " << 3 << endl;
    else {
        for (int i = 4; i <= n; i++) cout << i << " ";
        cout << 1 << " " << 2 << " " << 3 << " ";
        cout << endl;
    }
  }
  return 0;
}