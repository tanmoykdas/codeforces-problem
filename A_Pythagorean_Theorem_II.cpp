#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  int cnt = 0;
  for (int a = 1; a <= n; a++) {
    for (int b = a; b <= n; b++) {
      int c = sqrt((a * a) + (b * b));
      if (c * c == (a * a) + (b * b) && c >= b && c <= n) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}