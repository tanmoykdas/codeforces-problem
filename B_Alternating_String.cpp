#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(ll itt) {
  string s; cin >> s;
  bool f = false, b = false;
  ll bin = -1, ein = -1;
  for (int i = 0; i + 1 < s.size(); i++) {
    if (s[i] == s[i + 1] && !f) {
        f = true;
        bin = i + 1;
        continue;
    }
    if (!b && (s[i] == s[i + 1])) {
        ein = i;
        b = true;
        break;
    }
  }
  if (f) {
    if (!b) ein = s.size() - 1;
    // cout << bin << " " << ein << " " << itt << endl;
    for (int i = bin; i <= ein; i++) {
        if (s[i] == 'a') s[i] = 'b';
        else s[i] = 'a';
    }
  }
  bool ans = true;
  for (int i = 0; i + 1 < s.size(); i++) {
    if (s[i] == s[i + 1]) ans = false;
  }
  cout << (ans ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  ll itt = 1;
  while(tt--) solve(itt++);
  return 0;
}