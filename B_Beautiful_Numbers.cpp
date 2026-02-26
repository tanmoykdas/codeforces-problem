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
    sort(s.begin() + 1, s.end());
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }
    if (sum <= 9) cout << 0 << endl;
    else {
        sum = 0;
        int c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (sum + (s[i] - '0') <= 9) {
                sum += (s[i] - '0');
                c++;
            } else break;
        }
        int ans = s.size() - c;
        bool f = false;
        if (s[0] != '1') {
            f = true;
            s[0] = '1';
        }
        c = 0;
        sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (sum + (s[i] - '0') <= 9) {
                sum += (s[i] - '0');
                c++;
            } else break;
        }
        if (f) {
            int anss;
            anss = s.size() - (c - 1);
            cout << min(ans, anss) << endl;
        } else cout << ans << endl;
    }
  }
  return 0;
}