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
    int a[n][n];
    vector<int> v;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
        v.push_back(a[i][j]);
      }
    }
    int miss = 2;
    for (int i = 1; i <= n * 2; i++) {
      if (find(v.begin(), v.end(), i) == v.end()) {
        miss = i;
        break;
      }
    }
    cout << miss << " ";
    for (int i = 0; i < n; i++) {
        cout << a[0][i] << " ";
    }
    for (int i = 1; i < n; i++) {
        cout << a[n - 1][i] << " ";
    }
    cout << '\n';
  }
  return 0;