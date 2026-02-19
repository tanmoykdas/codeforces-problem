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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto x : s) {
        mp[x]++;
    }
    bool ok = false;
    int c = 0;
    int dif = n - k;
    for (auto x : mp) {
        if (c < dif) {
            if (x.second % 2 == 0) {
              c += x.second;
            } else {
              if (x.second > 1) {
                c += x.second - 1;
              }
            }
        }
    }
    // for (auto x : mp) cout << x.second << " ";
    //   cout << "\n";
    //   cout << c << "\n";
    if (c < dif) {
      for (auto x : mp) {
        if (x.second % 2 == 1) {
          c++;
          break;
        }
      }
    }
    cout << (c >= dif ? "YES" : "NO") << "\n";
  }
  return 0;
}