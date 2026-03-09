#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    bool f = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (f && j == 0) {
                cout << "W";
                f = false;
            } else cout << "B";
        }
        cout << endl;
    }
  }
  return 0;
}