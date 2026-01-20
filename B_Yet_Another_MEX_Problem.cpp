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
    vector<int> v;
    for (auto& x : a) cin >> x;
    sort(a, a + n);
    v.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (a[i] != v.back()) v.push_back(a[i]);
    }
    int removable = n - v.size();
    int turn = n - k + 1;
    if (removable >= turn) {
        int mex;
        if (v.size() == 1) {
            if (v[0] == 0) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }
        if (v[0] != 0) cout << 0 << endl;
        else {
            int mex = 0;
            for (int i = 1; i < v.size(); i++) {
                if (v[i] - v[i - 1] != 1) {
                    mex = ++v[i - 1];
                    break;
                }

                if (i == v.size() - 1 && v[i] - v[i - 1] == 1) mex = ++v[i];
            }
            cout << mex << endl;
        }
    } else {
        // for (auto x : v) cout << x << " ";
        // cout << endl;
        int omit = turn - removable;
        while (omit--) v.pop_back();
        int mex;
        if (v.size() == 1) {
            if (v[0] == 0) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        } 
        if (v[0] != 0) cout << 0 << endl;
        else {
            int mex = 0;
            for (int i = 1; i < v.size(); i++) {
                if (v[i] - v[i - 1] != 1) {
                    mex = ++v[i - 1];
                    break;
                }

                if (i == v.size() - 1 && v[i] - v[i - 1] == 1) mex = ++v[i];
            }
            // for (auto x : v) cout << x << " ";
            // cout << endl;
            cout << mex << endl;
        }
    }
  }
  return 0;
}