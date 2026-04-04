#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  ll c = 1, k = n * 3 - 1;
  while (n--) {
    cout << c << " " << k << " " << k + 1 << " ";
    c++;
    k -= 2;
  }
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