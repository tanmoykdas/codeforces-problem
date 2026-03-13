#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  string s;
  cin >> s;

  for(int i = 0; i < s.size(); i++) {
    ll a = s[i] - '0';
    ll b = 9 - a;
    ll mn = min(a, b);
    if (i == 0 && mn == 0) s[i] = max(a, b) + '0';
    else s[i] = mn + '0';
  }

  for (auto x : s) cout << x;

  return 0;
}