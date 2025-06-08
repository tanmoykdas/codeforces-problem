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
    cout << 2 << " ";
    int first = 3, last = n;
    for (int i = 0; i < n - 2; i++) {
        if (i % 2 == 0) {
            cout << first++ << " ";
        } else cout << last-- << " ";
    }
    cout << "1\n";
  }
  return 0;
}