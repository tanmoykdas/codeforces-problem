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
    string s;
    cin >> s;
    int c = 0, d = 0, mx = 0;
    bool flag = false;
    for (int i = 0; i < n - 3; i++) {
        if (s[i] == '2') ++c;
        if (s[i + 1] == '0') ++c;
        if (s[i + 2] == '2') ++c;
        if (s[i + 3] == '5') ++c;

        if (s[i] == '2') ++d;
        if (s[i + 1] == '0') ++d;
        if (s[i + 2] == '2') ++d;
        if (s[i + 3] == '6') ++d;
        // cout << s[i] << s[i + 1] << s[i + 2] << s[i + 3] << endl;
        if (d == 4) {
          flag = true;
          break;
        }
        if (c == 4) ++mx;
        c = 0;
        d = 0;
    }
    if (flag) cout << 0 << endl;
    else {
      if (mx) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
  return 0;
}