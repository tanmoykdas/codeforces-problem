#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int singles = 0;
    if (n == 1) {
        cout << 1 << endl;
        continue;
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (s[i] != s[i + 1]) singles++;
        } else if (i == n - 1) {
            if (s[i] != s[i - 1]) singles++;
        } else {
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) singles++;
        }
    }
    int insert = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) c++;
        else {
            insert += c;
            c = 0;
        }
    }
    vector<char> v;
    v.push_back(s[0]);
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) v.push_back(s[i]);
    }
    int ans = v.size();
    while (singles > 0) {
        if (insert) {
            insert--;
            singles--;
            ans++;
        } else break;
    }
    cout << ans << endl;
  }
  return 0;
}