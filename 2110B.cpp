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
    if (s[0] == '(' && s[s.size() - 1] == ')') {
      int cnt = 0;
      for (int i = 1; i < s.size() - 1; i++) {
        char c = s[i];
        if (c == '(') {
          cnt++;
        } else {
          cnt--;
        }
        if (cnt < 0) {
          cout << "YES\n";
          break;
        }
      }
      if (cnt == 0) {
        cout << "NO\n";
      } else if (cnt > 0) {
        cout << "YES\n";
      }
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}