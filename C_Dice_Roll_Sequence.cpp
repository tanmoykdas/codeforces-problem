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
    int a[n];
    for (auto& x : a) cin >> x;
    int c = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 1 && a[i + 1] == 6) c++;
        if (a[i] == 6 && a[i + 1] == 1) c++;

        if (a[i] == 2 && a[i + 1] == 5) c++;
        if (a[i] == 5 && a[i + 1] == 2) c++;

        if (a[i] == 3 && a[i + 1] == 4) c++;
        if (a[i] == 4 && a[i + 1] == 3) c++;

        if (a[i] == a[i + 1]) c++;
    }
    cout << c << endl;
  }
  return 0;
}