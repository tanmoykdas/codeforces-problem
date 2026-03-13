#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll buns, beef, chicken;
  cin >> buns >> beef >> chicken;
  ll h, c;
  cin >> h >> c;
  if (h >= c) {
    ll amount = 0;
    amount = min((buns / 2), beef);
    ll cost = amount * h;
    buns -= (amount * 2);
    amount = 0;
    amount = min((buns / 2), chicken);
    cost += (amount * c);
    cout << cost << endl;
  } else {
    ll amount = 0;
    amount = min((buns / 2), chicken);
    ll cost = amount * c;
    buns -= (amount * 2);
    amount = 0;
    amount = min((buns / 2), beef);
    cost += (amount * h);
    cout << cost << endl;
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