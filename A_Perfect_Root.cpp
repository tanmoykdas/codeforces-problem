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
    int cnt = 1, c = 0;
    vector<int> v;
    while (1) {
        int temp = sqrt(cnt);
        if (temp * temp == cnt) {
            v.push_back(cnt);
            ++c;
            if (c == n) {
                for (auto x : v) cout << x << " ";
                cout << endl;
                break;
            }
        }
        ++cnt;
    }
  }
  return 0;
}