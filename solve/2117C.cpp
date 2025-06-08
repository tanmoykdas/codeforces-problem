#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    map<int, int> mp;
    for (int x : a) mp[x]++;
    int mx = 0;
    // for (auto x : a) {
    //     if (mp[x] > mx) mx = mp[x];
    // }
    cout << mp[a[0]] << '\n';
  }
  return 0;
}