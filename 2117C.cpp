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
    set<int> st1, st2;
    int c = 0;
    st1.insert(a[0]);
    bool first = true, second = false;
    for (int i = 1; i < n; i++) {

      if (first) {
        st2.insert(a[i]);
        // cout << a[i] << "f";
        if (st1.count(a[i])) st1.erase(a[i]);
        if (st1.size() == 0) {
          first = false;
          second = true;
          c++;
          // cout << endl;
          continue;
          // for (auto x : st2) cout << x << " ";
        }
      }

      if (second) {
        st1.insert(a[i]);
        // cout << a[i] << "s";
        if (st2.count(a[i])) st2.erase(a[i]);
        if (st2.size() == 0) {
          first = true;
          second = false;
          c++;
          // for (auto x : st1) cout << x << " ";
          // cout << endl;
        }
      }
    }

    cout << ++c << '\n';
  }
  return 0;
}