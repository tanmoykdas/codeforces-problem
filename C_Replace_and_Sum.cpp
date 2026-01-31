#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            a[i] = max(a[i], b[i]);
            continue;
        }
        int temp = max (a[i], max(a[i + 1], b[i]));
        a[i] = temp;
    }
    
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) a[i] = a[i + 1];
    }

    long long sum = 0;
    vector<long long> sm(n);
    for (int i = 0; i < n; i++) {
        sum += a[i];
        sm[i] = sum;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        if (l == 0) {
            cout << sm[r] << " ";
        } else {
            cout << sm[r] - sm[l - 1] << " ";
        } 
    }
    cout << endl;
  }
  return 0;
}