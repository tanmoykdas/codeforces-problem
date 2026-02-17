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
    for (int i = 0; i < n; i++) {
        mp[i + 1] = n - i;
    }
    for (int i = 0; i < n; i++) {
        cout << mp[a[i]] << " ";
    }
    cout << "\n";
  }
  return 0;
}