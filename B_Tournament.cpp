#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, j, k;
    cin >> n >> j >> k;
    j--;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int mx = *max_element(a.begin(), a.end());
    if (mx == a[j]) cout << "YES\n";
    else if (k > 1) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}