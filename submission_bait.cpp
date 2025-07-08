#include <bits/stdc++.h>
using namespace std;

void test_case() {
  int n;
  cin >> n;
  vector<int> cnt(n + 1);
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    cnt[temp]++;
  }
  for (int i = 1; i <= n; i++) {
    if (cnt[i] % 2) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    test_case();
  }
  return 0;
}