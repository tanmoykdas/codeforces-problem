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
    int a[n];
    for (auto& x : a) cin >> x;
    if (n == 1) cout << -1 << endl;
    else if (n == 2) {
        if (a[1] == 1) cout << 0 << " " << 0 << endl;
        else cout << 0 << " " << 1 << endl;
    } else {
        int b[n];
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 0) b[i] = 1;
            else b[i] = 0;
        }
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) flag = true;
        }
        if (flag) {
            for (auto x : b) cout << x << " ";
            cout << endl;
        } else {
            if (n % 2 == 0) {
                b[1] = 0;
                b[n - 2] = 1;
                for (auto x : b) cout << x << " ";
                cout << endl;
            } else {
                b[1] = 0;
                b[n - 1] = 1;
                for (auto x : b) cout << x << " ";
                cout << endl;
            }
        }
    }
  }
  return 0;
}