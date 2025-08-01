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
    string s = "aeiou";
    vector<char> v;
    for (int i = 0; i < n; i++) {
        v.push_back(s[i % 5]);
    }
    sort(v.begin(), v.end());
    for (auto x : v) cout << x;
    cout << '\n';
  }
  return 0;
}