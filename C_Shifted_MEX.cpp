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
    sort(a, a + n);
    vector<int> v;
    v.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (v.back() != a[i]) {
            v.push_back(a[i]);
        }
    } 
    int c = 0, mx = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] - v[i - 1] == 1) {
            c++;
            mx = max(mx, c);
        } else {
            c = 0;
        }
    }
    cout << mx + 1 << endl;
  }
  return 0;
}