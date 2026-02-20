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
        int index = 0;
        for (auto it : mpp) {
            if (it.first < s[0] && it.second > mp[it.first]) {
                for (int i = 0; i < it.second - mp[it.first]; i++) {
                    cout << it.first;
                    mpp[it.first]--;
                }
            } else {
                while (s[index++] < )
            }
        }
    } else cout << "Impossible" << endl;
  }
  return 0;
}