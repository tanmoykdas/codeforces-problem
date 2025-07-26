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
    if (n < 2) {
        cout << -1 << endl;
        continue;
    }
    int c = 0;
    for (auto x : a) {
        if (x == 1) c++;
    }
    int parbo = n / 2;
    if (c < parbo) {
        for (int i = 0; i < n - parbo; i++) {
            cout << 0 << " ";
        }
        for (int i = 0; i < parbo; i++) {
            cout << 1 << " ";
        }
       
    } else {
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (flag) {
                if (a[i] == 1) {
                    cout << 0 << " ";
                    flag = false;
                } 
                else cout << 0 << " ";
                
            } else cout << a[i] << " ";
        }
        cout << '\n';
    }
  }
  return 0;
}