#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto& x : a) cin >> x;
    sort(a, a + n);
    // for (auto x : a) cout << x << " ";
    // cout << endl;
    int soman = 0;
    set<int> st;
    for (int i = 0; i < n; i++) {
      if (a[i] > k) break;
      else if (a[i] == k) soman++;
      else {
        st.insert(a[i]);
      }
    }
    int lagbe = k - st.size();
    // cout << lagbe << " ";
    if (soman) {
      if (soman >= lagbe) cout << soman << endl;
      else cout << lagbe << endl;
    }
    else cout << lagbe << endl;
  }
  return 0;
}