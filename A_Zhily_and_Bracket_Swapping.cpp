#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  string a, b; cin >> a >> b;

  ll c = 0;
  bool f = true;
  for (int i = 0; i < n; i++) {
    if (a[i] == '(') c++;
    else c--;

    if (c < 0) {
        f = false;
        break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (b[i] == '(') c++;
    else c--;

    if (c < 0) {
        f = false;
        break;
    }
  }
  if (c) f = false;

  if (a[0] == ')' || b[0] == ')') f = false;
  if (a[n - 1] == '(' || b[n - 1] == '(') false;

  cout << (f ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}