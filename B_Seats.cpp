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
    if (n < 3) cout << 1 << endl;
    else {
        if (s[0] == '0' && s[1] == '0' && s[2] == '0') s[1] = '1';
        if (s[0] == '0' && s[1] == '0' && s[2] == '1') s[0] = '1';

        if (s[n - 1] == '0' && s[n - 2] == '0' && s[n - 3] == '0') s[n - 2] = '1';
        if (s[n - 1] == '0' && s[n - 2] == '0' && s[n - 3] == '1') s[n - 1] = '1';

        int czero = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') czero++;
            else {
                ans += (czero / 3);
                czero = 0;
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cnt++;
        }

        cout << ans + cnt << endl;
    }
  }

  return 0;
}