#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    if(n % 2) {
        cout << "NO" << endl;
        continue;
    }

    map<char, int> mp;
    for (auto x : s) mp[x]++;

    bool f = true;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second % 2) {
            f = false; 
        }
    }

    if (f) {

        vector<char> v(s.begin(), s.end());
        bool ans = true;
        while (!v.empty()) {
            int temp = v.size();
            for (int i = 0; i < (int)v.size() - 1; i++) {
                if (v[i] == v[i + 1]) {
                    v.erase(v.begin() + i, v.begin() + i + 2);
                    i--;
                }
            }
            if (temp == v.size()) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES\n" : "NO\n");

    } else cout << "NO\n";
  }
  return 0;
}