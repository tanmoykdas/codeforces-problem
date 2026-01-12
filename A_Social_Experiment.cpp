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
    if (n == 2) cout << 2 << endl;
    else if (n == 3) cout << 3 << endl;
    else {
        if (n % 2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    } 
  }
  return 0;
}