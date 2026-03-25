#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] >= 0 && a[i] <= n) b[a[i]] = a[i];
  }
  vector<ll> c, d;
  for (int i = 1; i < n + 1; i++) {
    if (b[i] == 0) {
      c.push_back(i);
      // cout << i << " ";
    }
  }
  // cout << endl;
  for (int i = 0; i < c.size() / 2; i++) {
    d.push_back(c[c.size() - i - 1]);
    d.push_back(c[i]);
  }
  if (c.size() % 2) d.push_back(c[c.size() / 2]);
  // for (auto x : d) cout << x << " ";
  // cout << endl;
  ll in = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      a[i] = d[in++];
    }
  }
  c.clear();
  bool fi = false, sc = false;
  ll fst = 0, sec = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != (i + 1)) {
      if (!fi) {
        fst = i;
        sec = i;
        fi = true;
      } else sec = i;
    }
  }
  if (fst == sec) cout << 0 << endl;
  else cout << (sec - fst) + 1 << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}