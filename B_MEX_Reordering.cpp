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

    if (n == 2) {
      if (min(a[0], a[1]) == 0 && max(a[0], a[1]) != 0) cout << "YES\n";
      else cout << "NO\n";
      continue;
    }

    sort(a.begin(), a.end());
    int mex1, mex2;
    if(a[0] == 0) mex1 = 1;
    else mex1 = 0;
    for (int i = 1; i < n - 1; i++) {
      if (a[i + 1] - a[i] > 1) {
        mex2 = a[i];
        break;
      }
      if (i == n - 2 && a[i + 1] - a[i] <= 1) mex2 = a[i + 1];
    }

    if (a[1] != 0) mex2 = 0;
    else ++mex2;
    
    if (mex1 == mex2) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}