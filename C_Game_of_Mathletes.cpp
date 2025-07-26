#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a) cin >> x;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        if (a[i] >= k) continue;
        else v.push_back(a[i]);
    }
    sort (v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    map<int, int> mp, mc;
    set<int> st, ss;
    for (int i = 0; i < v.size(); i++) {
        mp[v[i]] = k - v[i];
        mc[v[i]]++;
        // st.insert(v[i]);
    }
    int c = 0;
    for (const auto &x : mp) {
        if (ss.count(x.first) == 0 && ss.count(x.second) == 0) {
            if (x.first == x.second) c += mc[x.first] / 2;
            else c += min(mc[x.first], mc[x.second]);
            ss.insert(x.first);
            ss.insert(x.second);
            // cout << x.first << " " << x.second << "--" << mc[x.first] << " " << mc[x.second] << endl;
        }
    }
    cout << c << endl;
  }
  return 0;
}