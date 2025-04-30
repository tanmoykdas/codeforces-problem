#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    if (s[0] == s[n - 1]) {
        cout << (s[0] == 'A' ? "Alice" : "Bob");
    } else {
        bool flag = false;
        if (s[n - 1] == 'A') {
            cout << ((s[n - 2] == 'A') ? "Alice" : "Bob");
        } else {
            for (int i = n - 2; i >= 1; i--) {
                if (s[i] == 'B') flag = true;
            }
            cout << ((flag) ? "Bob" : "Alice");
        }
    }
    cout << "\n";
  }
  return 0;
}