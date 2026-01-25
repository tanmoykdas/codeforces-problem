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
    vector<char> a(n);

    for (auto& x : a) cin >> x;
    while (m--) {
        int x, c = 0, i = 0, A = 0;
        cin >> x;
        for (auto x : a) {
            if (x == 'A') ++A;
        }
        if (A == n) {
            c = x;
            goto print;
        }
        while(1) {
            if (a[i] == 'A') x -= 1;
            else x /= 2;
            
            i++; c++;
            if (i == n) i = 0;
            if (x <= 0) break;
        }
        print:
        cout << c << endl;
    }
  }
  return 0;
}