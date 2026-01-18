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

    bool even = true, odd = true;
    int max_even, max_odd;

    for (int i = n - 1; i >= 0; i--) {
        if (even && a[i] % 2 == 0 && a[i] != 1) {
            max_even = a[i];
            even = false;
        }

        if (odd && a[i] % 2 != 0 && a[i] != 1) {
            max_odd = a[i];
            odd = false;
        }
    }

    set<int> st;
    for (auto x : a) st.insert(x);

    if (even == 0) {
        for (int i = max_even - 2; i > 0; i -= 2) {
            cout << i << " ";
        }
    }
  }
  return 0;
}