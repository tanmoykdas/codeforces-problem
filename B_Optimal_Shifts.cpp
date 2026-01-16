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
    if (s[0] == '0' && s[n - 1] == '0') {
        int c1 = 0, c2 = 0;
        int mx1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ++c1;
                mx1 = max(mx1, c1);
            } else c1 = 0;
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ++c2;
            } else break;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                ++c2;
            } else break;
        }
        cout << max (mx1, c2) << endl;
    } else {
        int mx2 = 0, c = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ++c;
                mx2 = max(mx2, c);
            } else c = 0;
        }
        cout << mx2 << endl;
    }
    }
    
  return 0;
}