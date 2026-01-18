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
        flag = true;
        if (v[j] + val > h) {
            flag = false;
            in.clear();
            vl.clear();
        }
    }
    
    
    if (flag) {
        for (int i = 0; i < in.size(); i++) {
            a[in[i]] += vl[i];
        }
        for (auto x : a) cout << x << " ";
        cout << endl;
    } else {
        for (auto x : a) cout << x << " ";
        cout << endl;
    }
  }
  return 0;
}