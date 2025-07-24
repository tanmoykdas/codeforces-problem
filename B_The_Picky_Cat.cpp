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
    for (int &x : a) cin >> x;
    int c = 0;
    for (int i = 1; i < n; i++) {
      if (abs(a[i]) < abs(a[0])) c++;
    }
    cout << (c <= n / 2 ? "YES\n" : "NO\n");
  }
  return 0;
}