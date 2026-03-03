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
    string s;
    cin >> s;
    int c = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') c++;
        else d++;
    }
    if (d % 2 && d != 1) c += (d - 1);
    else if (d % 2 == 0) c += d;

    cout << (c % 2 ? "YES\n" : "NO\n");
  }
  return 0;
}