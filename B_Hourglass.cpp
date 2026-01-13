#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long s, k, m;
    cin >> s >> k >> m;
    
    if (k >= s) {
      long long rem = m % k;
      if (rem == 0) {
        cout << s << endl;
      } else {
        cout << max(0LL, s - rem) << endl;
      }
    } else {
      long long bar = m / k;
      long long bad = m % k;
      if (bar % 2 == 1) {
        cout << k - bad << endl;
      } else {
        cout << s - bad << endl;
      }
    }
  }
  return 0;
}