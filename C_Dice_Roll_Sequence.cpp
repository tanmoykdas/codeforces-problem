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
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + a[i + 1] == 7) a[i + 1] = 0;
        else if (a[i] == a[i + 1]) a[i + 1] = 0;
    }
    cout << count(a, a + n, 0) << endl;
  }
  return 0;
}