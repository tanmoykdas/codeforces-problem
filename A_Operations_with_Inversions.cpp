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
    int high = 0, c = 0;
    for (int i = 0; i < n - 1; i++) {
      if (a[high] > a[i + 1]) {
        c++;
      } else {
        high = i + 1;
      }
    }
    cout << c << endl;
  }
  return 0;
}