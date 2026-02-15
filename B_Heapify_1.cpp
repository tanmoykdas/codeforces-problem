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
    for (int i = 0; i < n; i++) {
        int index = i + 1;
        while (index % 2 == 0) {
            if (a[index - 1] < a[index / 2 - 1]) swap(a[index - 1], a[index / 2 - 1]);
            index /= 2;
        }
    }
    // for (int i = 0; i < n; i++) cout << a[i] << " ";
    if (is_sorted(a, a + n)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}