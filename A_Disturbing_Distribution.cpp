#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const long long M = 676767677;

void solve() {
  ll n; cin >> n;
  vector<ll> a; 
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    a.push_back(x);
    if (x != 1) sum += x;
  }

  if (a[n - 1] == 1) sum += 1;
  cout << sum << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}