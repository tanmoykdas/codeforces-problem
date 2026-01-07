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

    if (a[0] == a[n - 1]) {
        if (a[0] == 1) cout << "Alice\n";
        else cout << "Bob\n";
    } else {
        bool all1 = true, jitbe = false;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] != 1) {
                if (a[n - 1] == 1) jitbe = true;
                break;
            }
        }

        for (int i = n - 1; i > 0; i--) {
            if (a[i] != 1) {
                if (a[0] == 1) jitbe = true;
                break;
            }
        }
        
        if (jitbe) cout << "Alice\n";
        else cout << "Bob\n";
    }

  }
  return 0;
}