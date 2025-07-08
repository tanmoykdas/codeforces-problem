#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int m;
    cin >> m;
    vector<int> a(m);
    for (auto &x : a) cin >> x;
    a.push_back(INT_MAX);
    if (m < 3) cout << "-1\n";
     else {
        if (a[0] != a[m - 1]) cout << "0\n";
        else {
            int c = 0, mn = INT_MAX;
            for(int i = 0; i < a.size(); i++) {
                if (a[0] == a[i]) c++;
                else {
                    mn = min(mn, c);
                    c = 0;
                }
            }
            if (mn == m) cout << -1 << "\n";
            else
            cout << mn << "\n";
        }
    }
  }
  return 0;
}