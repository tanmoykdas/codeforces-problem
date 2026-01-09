#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int left = 0, right = 0;
    left = k - 1;
    right = n - k;
    if (left > right) {
        int c = -1;
        int jacchi = 0;
        for (int i = k - 1; i >= 0; i--) {
            c++;
            jacchi++;
            cout << jacchi << " " << c << endl;
            if ((jacchi + c) == m) break;
        }
        // --jacchi;
        // --c;
        int cost = jacchi + c;
        // cout << cost << " " << m << endl;
        if (cost == m) cout << cost << endl;
        else if (m > cost) {
            int jaite_parbo = cost + (m - cost) - 1;
            // cout << jaite_parbo << endl;
            if (jaite_parbo >= n) cout << n << endl;
            else cout << jaite_parbo << endl;
        } else cout << cost + 1 << endl;
    } else {
        int c = -1;
        int jacchi = 0;
        for (int i = k + 1; i < n; i++) {
            c++;
            jacchi++;
            if ((jacchi + c) == m) break;
            // cout << jacchi << " " << c << endl;
        }
        --jacchi;
        --c;
        int cost = jacchi + c;
        // cout << cost << " " << m << endl;
        if (cost == m) cout << cost << endl;
        else {
            int jaite_parbo = cost + (m - cost) - 1;
            // cout << jaite_parbo << endl;
            if (jaite_parbo >= n) cout << n << endl;
            else cout << jaite_parbo << endl;
        }
    }
  }
  return 0;
}