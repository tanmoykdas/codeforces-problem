#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  string s; cin >> s;
  string ans = "";
  if (n == 1) cout << s << s << endl;
  else {
    if (s[1] >= s[0]) cout << s[0] << s[0] << endl;
    else {
        ans.push_back(s[0]);
        for (int i = 1; i < n; i++) {
            ll x = s[i - 1];
            ll y = s[i];
            if (y <= x) ans.push_back(s[i]);
            else break;
        }
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
  }
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}