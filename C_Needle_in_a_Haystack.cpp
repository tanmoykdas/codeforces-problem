#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s, ss;
    cin >> s >> ss;
    sort(ss.begin(), ss.end());
    map<char, int> mp, mpp;
    for (auto x : s) mp[x]++;
    for (auto x : ss) mpp[x]++;
    bool flag = true;
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] > mpp[s[i]]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        for (auto it = mp.begin(); it != mp.end(); it++) {
            mpp[it->first] -= it->second;
        } 
        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            if (it->second > 0) {
                auto temp = lower_bound(s.begin(), s.end(), it->first);
                for (int i = 0; i < it->second; i++) {
                    s.insert(temp, it->first);
                }
            } 
        }
        cout << s << endl;
    } else cout << "Impossible" << endl;
  }
  return 0;
}