#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  string s; cin >> s;

  ll c = 0, mn = LLONG_MAX;

  for (int i = 0; i < n; i++) {
    if (s[i] == '(') c++;
    else c--;
    mn = min(c, mn);
  }
  cout << abs(mn) << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}