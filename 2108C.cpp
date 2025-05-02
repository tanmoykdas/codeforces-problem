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
    if (n == 1|| n == 2) {
      cout << 1 << endl;
      continue;
    }
    for (auto& x : a) cin >> x;
    set<int> st;
    for (auto x : a) st.insert(x);
    if (st.size() == 1) {
        cout << 1 << endl;
        continue;
    }
    int c = 0;
    bool boro = false, choto = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] > a[i]) boro = true;
        if (a[i + 1] < a[i]) choto = true;
        if (choto) {
            if (a[i + 1] > a[i]) {
                c++;
                choto = false;
            }
        }
    }
    if(a[n - 1] > a[n - 2]) c++;
    cout << c << endl;
  }
  return 0;
}