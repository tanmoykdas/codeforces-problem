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
    for (auto &x : a) cin >> x;
    a.push_back(INT_MAX);
    if (n < 3) cout << "-1\n";
     else {
        if (a[0] != a[n - 1]) cout << "0\n";
        else {
            int c = 0, mn = INT_MAX;
            for(int i = 0; i < a.size(); i++) {
                if (a[0] == a[i]) c++;
                else {
                    mn = min(mn, c);
                    c = 0;
                }
            }
            if (mn == n) cout << -1 << "\n";
            else
            cout << mn << "\n";
        }
    }
  }
  return 0;
}