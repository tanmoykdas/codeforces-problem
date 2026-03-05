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
    int c = count (s.begin(), s.end(), '1');
    int d = count (s.begin(), s.end(), '0');
    if (c == 0) cout << 0 << endl;
    else if (!(c % 2)) {
        if (d == 1) {
            cout << 1 << endl;
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') cout << i + 1;
            }
            cout << endl;
        } else {
            cout << c << endl;
            for (int i = 0; i < n; i++) {
                if (s[i] == '1') cout << i + 1 << " ";
            }
            cout << endl;
        }
    } else if (d % 2) {
        cout << d << endl;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') cout << i + 1 << " ";
        }
        cout << endl;
    } else cout << -1 << endl;
  }
  return 0;
}