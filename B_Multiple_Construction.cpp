#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  for (int i = n; i >= 1; i--) cout << i << " ";
  cout << n << " ";
  for (int i = 1; i < n; i++) cout << i << " ";
  cout << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}