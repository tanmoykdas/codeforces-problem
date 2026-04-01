#include<bits/stdc++.h>
using namespace std;

using ll = long long;
void solve() {
    ll n, k;  cin >> n >> k;
    for (int i = 0; i < (n / 2); i++) 
      cout << n - i << " " << i + 1 << " ";
    if (n % 2) cout << (n / 2) + 1;
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