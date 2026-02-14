#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int c = count(s.begin(), s.end(), '0');
    int ans = count(s.begin(), s.begin() + c, '1');
    cout << ans << endl;
  }
  return 0;
}