#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> a(n), v(n), in, vl;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v[i] = a[i];
    }
    
    for (int i = 0; i < m; i++) {
        int j;
        int val;
        cin >> j >> val;
        j--;
        in.push_back(j);
        vl.push_back(val);
    }
    int c = 0;
    // for (int i = 0; i < m; i++) {
    //     cout << in[i] << " " << vl[i] << endl;
    // }
    for (int i = m - 1; i >= 0; i--) {
        if (a[in[i]] + vl[i] > h){
            ++c;
            if (i == 0 && c == m) {
                if (vl[i] > h) flag = true;
                else flag = false;
            }
            break;
        } else {
            a[in[i]] += vl[i];
            ++c;
        }
    }

    if (!flag) {
        // cout << flag << endl;
        for (auto x : v) cout << x << " ";
        cout << endl;
        continue;
    }
    for (auto x : a) cout << x << " ";
    cout << endl;
  }

  return 0;
}