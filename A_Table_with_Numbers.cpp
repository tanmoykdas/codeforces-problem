#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, h, l;
    cin >> n >> h >> l;
    int a[n];
    for (auto& x : a) cin >> x;
    sort(a, a + n);
    vector<int> v;
    for (int i = 0; i < n; i++) {
        if (a[i] <= max(h,l)) {
            v.push_back(a[i]);
        }
    }
    vector<int> v1, v2;
    int c = v.size() / 2;
    for (int i = 0; i < v.size(); i++) {
        if (i < c) v1.push_back(v[i]);
        else v2.push_back(v[i]);
    }
    // for (auto x : v1) cout << x << " ";
    // cout << endl;
    // for (auto x : v2) cout << x << " ";
    int c1 = 0, c2 = 0;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] > min(h, l)) break;
        else ++c1;
    }
    for (int i = 0; i < v2.size(); i++) {
        if (v2[i] > max(h, l)) break;
        else ++c2;
    }
    cout << min(c1, c2) << endl;
  }
  return 0;
}