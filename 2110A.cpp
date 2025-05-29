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
    vector <int> a(n);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    int c = 0;
    if (a[n - 1] % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) break;
            else c++;
        }
    } else {
        for (int i = 0; i < n; i++) {
            if(a[i] % 2 != 0) break;
            else c++;
        }
    }
    int fl = c;
    c = 0;
    if (a[0] % 2 == 0) {
        reverse(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) break;
            else c++;
        }
    } else {
        reverse(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if(a[i] % 2 != 0) break;
            else c++;
        }
    }
    cout << min(fl, c) << endl;
  }
  return 0;
}