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
    // sort(s.begin(), s.end());
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
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]] -= mp[s[i]];
        } 
        cout << ss;
        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            cout << it->first << " " << it->second << endl;
        }
        int i = 0;
        cout << "parlam nah" << endl;
    } else cout << "Impossible" << endl;
  }
  return 0;
}