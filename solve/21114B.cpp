#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') c0++;
        else c1++;
    }

    int pair = n / 2;
    // cout << pair << endl;
    int parboo_na = pair - m;
    // cout << parboo_na << endl;
    // cout << c0 << " " << c1 << endl;
    c0 -= parboo_na;
    c1 -= parboo_na;
    // cout << c0 << " " << c1 << endl;
    bool ans = true;
    if (c1 < 0 || c0 < 0) ans = false;
    c0 /= 2;
    c1 /= 2;
    // cout << c0 << " " << c1 << endl;
    int parbo = c0 + c1;
    // cout << parbo << endl;
    if (parbo != m) ans = false;
    cout << (ans ? "YES" : "NO") << endl;
  }
  return 0;
}