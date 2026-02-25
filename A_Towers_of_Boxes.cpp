#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, d;
    cin >> n >> m >> d;
    int c = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += m;
        if (sum > d) {
            ++c;
            sum = 0;
        }
    }
    if (sum) ++c;
    cout << c << endl;
  }
  return 0;
}