#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s, ss;
    cin >> s >> ss;
    s.push_back('0');
    ss.push_back('0');
    int c = 0;
    vector<pair<char, int>> p, pp;
    for (int i = 0; i < s.size() - 1; i++) {
        ++c;
        if (s[i] != s[i + 1]) {
            p.push_back({s[i], c});
            c = 0;
        }
    }
    c = 0;
    for (int i = 0; i < ss.size() - 1; i++) {
        ++c;
        if (ss[i] != ss[i + 1]) {
            pp.push_back({ss[i], c});
            c = 0;
        }
    }
    if (p.size() != pp.size()) {
      cout << "NO\n";
      continue;
    } else {
        bool ok = true;
        for (int i = 0; i < p.size(); i++) {
            if (p[i].first != pp[i].first || pp[i].second > p[i].second * 2 || pp[i].second < p[i].second) {
            ok = false;
            break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
  }
  return 0;
}