#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    if (n == 1) {
        cout << -1 << endl;
        continue;
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            if (i == n - 1) {
                swap(b[i], b[i - 1]);
            } else {
                swap(b[i], b[i + 1]);
            }
        } else continue;
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
  }
  return 0;
}