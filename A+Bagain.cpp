#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int a,b;
    a = s[0] - '0';
    b = s[1] -  '0';
    cout << a + b << endl;
  }
  return 0;
}
