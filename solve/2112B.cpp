/*#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    if (n == 2) {
      int dif = abs(a[1] - a[0]);
      if (dif == 0 || dif == 1) cout << 0 << endl;
      else cout << -1 << endl;
    } else {
      bool ans = true;
      int c = 0;
      int temp = INT_MIN;
      for (int i = 0; i < n - 1; i++) {
        if (i == n - 2) {
          int dif = abs(a[n - 2] - a[n - 1]);
          if (dif != 1 || dif != 0) ans = false;
        } else {
            int dif = abs(a[i] - a[i + 1]);
            if (dif != 0 && dif != 1) {
            int mn = min(a[i], a[i + 1]);
            if (a[i + 2] >= mn) {
              temp = mn;
              c++;
              i++;
            } else {
              ans = false;
              break;
            }
          } else temp = a[i];
        }
      }
      cout << (ans ? c : -1) << '\n';
    }
  }
  return 0;
}*/

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
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int c1 = 0;
    for (int i = 0; i < n - 1; i++) {
      int dif = abs(a[i] - a[i + 1]);
      cout << dif << " ";
      if (dif != 0 || dif != 1) c1++;
    }
    //cout << c1;
  }
  return 0;
}