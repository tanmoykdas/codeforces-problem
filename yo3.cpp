#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> v(N);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int c = 0;
  for (int i = 1; i < N; i++) {
    int x = sqrt(i);
    if (x * x == i) c++;
    v[i] = c;
  }
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << v[n] << '\n';
  }
  return 0;
}