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
    vector<int> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    bool exist = false;
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            exist = true;
            x = a[i] + b[i];
        }
    }
    bool flag = true;
    if (exist) {
        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] != x && b[i] == -1) {
                if((x - a[i]) > k || (x - a[i]) < 0) flag = false;
            }
            if (a[i] + b[i] != x && b[i] != -1) flag = false;
            if (a[i] > x) flag = false;
        }
        cout << flag << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] > k) flag = false;
        }
        if (flag) {
            int mx = *max_element(a.begin(), a.end());
            int mn = *min_element(a.begin(), a.end());
            cout << (mn + k) - mx + 1 << "\n";
        } else cout << 0 << "\n";
    }
  }
  return 0;
}