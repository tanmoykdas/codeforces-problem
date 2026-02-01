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
    int fi = 1;
    int la = n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            v.push_back(fi);
            fi++;
        } else {
            v.push_back(la);
            la--;
        }
    }
    reverse(v.begin(), v.end());
    for (auto x : v) cout << x << " ";
    cout << endl;
  }
  return 0;
}