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
    string ss = s;
    ss[0] = 's';
    ss[s.size() - 1] = 's';

    for (int i = 0; i < s.size(); i++) {
        if (ss[i] == 'u') ss[i + 1] = 's';
    }
    int c = 0, d = 0;
    for (auto x : s) {
        if (x == 's') c++;
    }

    for (auto x : ss) {
        if (x == 's') d++;
    }
    cout << abs(c - d) << "\n";
  }
  return 0;
}