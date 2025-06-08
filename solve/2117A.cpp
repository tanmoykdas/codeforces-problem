#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int first = 0, last = 0;
    bool paisi = false;
    for (int i = 0; i < n; i++) {
        if (paisi == false && a[i] == 1) {
            first = i;
            paisi = true;
        }
        if (a[i] == 1) last = i;
    }
    int size = last - first + 1;
    if (paisi) cout << (size <= m ? "YES\n" : "NO\n");
    else cout << "NO\n";
  }
  return 0;
}