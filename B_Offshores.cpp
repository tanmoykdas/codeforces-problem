#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    for (auto& i : a) cin >> i;
    sort(a, a + n);
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += a[i];
        cout << a[i] << " ";  
    }
    cout << sum << endl;
  }
  return 0;
}