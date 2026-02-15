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

    set<int> s(a.begin(), a.end());
    if (s.size() != n) {
        cout << "NO\n";
        continue;
    } else {
        vector<int> b(a);
        sort(b.begin(), b.end());
        if (b[n - 1] != n) {
            cout << "NO\n";
            continue;
        }
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
        continue;
    }

    for (int i = 0; i < n / 2; i++) {
        int id1 = i + 1;
        int id2 = id1 * 2;
        --id1; --id2;
        if (a[id1] > a[id2]) swap(a[id1], a[id2]);
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
  }
  return 0;
}