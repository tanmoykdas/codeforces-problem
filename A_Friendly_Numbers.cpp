#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s.size() == 1) cout << 0 << endl;
    else {
      int c = 0;
      for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') c++;
      }
      if (c >= 2) cout << 10 << endl;
      else cout << 0 << endl;
    }
  }
  return 0;
}