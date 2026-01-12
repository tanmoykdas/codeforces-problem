#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int s, k, m;
    cin >> s >> k >> m;
    int temp = 0;
    int remain = s;
    int c = k;
    while (k <= m) {
        remain -= c;
        k += c;
        if (remain == 0) remain = s;
        cout << remain << " ";
    }
    cout << endl;
  }
  return 0;
}