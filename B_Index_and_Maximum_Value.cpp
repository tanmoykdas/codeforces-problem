#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
    }
    char ao;
    int in, en;
    for (int i = 0; i < m; i++) {
      cin >> ao >> in >> en;
      if (in <= mx && mx <= en) {
        if (ao == '+') mx += 1;
        else mx -= 1;
        cout << mx << " ";
      } else cout << mx << " ";
    }
    cout << '\n';
  }
  return 0;
}