#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  string s;
  cin >> n;
  cin >> s;
  ll b = 0, e = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') b++;
    else e++;
  }
  cout << (b == e ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}