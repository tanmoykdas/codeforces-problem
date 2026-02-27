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
    int mx = 0, ele = 0, temp = 0;
    for (int i = 0; i < n; i++) {
        int index = i + 1;
        mx = max(a[i], mx);

        if (index == mx && i != n - 1) {
            ele = i;
            temp++;
            break;
        }

    }
    if (temp) {
        for (int i = 0; i < n; i++) {
            if (a[i] == n) a[i] = a[ele];
        }
        if (ele + 1 != n) {
            a[ele] = n;
        }
    }
    
    for (auto x : a) cout << x << " ";
    cout << endl;
  }
  return 0;
}