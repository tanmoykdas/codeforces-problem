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
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> v;
    
    for (int i = 0; i < n; i++) v.push_back(a[i]);
    
    vector<int> in;
    int last_crash = -1;
    
    for (int i = 0; i < m; i++) {
        int j, val;
        cin >> j >> val;
        j--;
        long long temp = (long long)v[j] + val;
        if (temp <= h) {
            v[j] = temp;
            in.push_back(j);
        } else {
            in.clear();
            last_crash = i;
        }
    }
    
    
        sort(in.begin(), in.end());
        in.erase(unique(in.begin(), in.end()), in.end());

        // for (auto x : in) cout << x << " ";
        // cout << "\n";
        
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (c < in.size() && i == in[c]) {
                cout << v[i] << " ";
                c++;
            } else cout << a[i] << " ";
        }
        cout << "\n";
  }
  return 0;
}