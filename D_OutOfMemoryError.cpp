#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> a(n), v(n);
    for (auto& x : a) cin >> x;
    for (int i = 0; i < n; i++) v[i] = a[i];
    set<int> st;
    while(m--) {
        int j, val;
        cin >> j >> val;
        v[j - 1] += val;
        st.insert(j - 1);
        if (v[j - 1] > h) {
            for (auto x : st) v[x] = a[x];
            st.clear();
        }
    }
    for (auto x : v) cout << x << " ";
    cout << endl;
  }
  return 0;
}