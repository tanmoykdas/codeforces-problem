#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, m;
  cin >> n >> m;
  bool f = true;
  ll x = 1, y = 0;
  if (m == 1) {
    if (n < 2) f = false;
    else {
        n -= 2;
        y += 1;
    }
    if (n % 4 != 0 && n != 0) f = false;
    else {
        y += (n / 4);
    }

  } else if (m == 2) {
    y += 1;
    if (n % 4 != 0) f = false; 
    else y += (n / 4);
  }
  else {
    m -= 2;
    y += 1;
    if (n < m) f = false;
    else {
        y += n;
        n -= n;
        m -= n;
    }
    if (m) {
        if (m % 4 == 0) y += (m / 4);
        else f = false;
    }
  }
  cout << (f ? 1 : 0) << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}