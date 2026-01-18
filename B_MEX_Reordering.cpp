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
    vector<int> mex1, mex2;
    if (a[0] == 0) mex1.push_back(1);
    else mex1.push_back(0);
    for (int i = 1; i < n - 1; i++) {
      // cout << a[i] << " " << mex1.back() << endl;
        if (a[i] == mex1.back()) mex1.push_back(mex1.back() + 1);
        else mex1.push_back(mex1.back());
    }
    for (auto x : mex1) cout << x << " ";
    cout << endl;

    if (a[n - 1] == 0) mex2.push_back(1);
    else mex2.push_back(0);
    for (int i = n - 2; i > 0; i--) {
      if (a[i] == mex2.back()) mex2.push_back(mex2.back() + 1);
        else mex2.push_back(mex2.back());
    }
    for (auto x : mex1) cout << x << " ";
    cout << endl;
  }
  return 0;
}