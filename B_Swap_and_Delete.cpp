#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string s;
  cin >> s;
  ll c = 0, d = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') c++;
    else d++;
  }
  ll ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      if (d) {
        d--;
        ans++;
      } else break;
    }

    if (s[i] == '0') {
      if (c) {
        c--;
        ans++;
      } else break;
    }
  }
  cout << s.size() - ans << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}