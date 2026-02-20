#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s; cin >> s;
    string t; cin >> t;
    map<char, int> mp_s, mp_t;
    for (auto x : s) {
        mp_s[x]++;
    }
    for (auto x : t) {
        mp_t[x]++;
    }
    bool ok = true;
    for (int i = 0; i < s.size(); i++) {
        if (mp_s[s[i]] > mp_t[s[i]]) {
            ok = false;
            break;
        }
    }
    if (ok) {
        int index = 0;
        sort(t.begin(), t.end());
        for (int i = 0; i < t.size(); i++) {
            if (it->first < s[index] && it->second > mp_s[it->first]) {
                cout << it->first;
                mp_t[it->first]--;
                cout << it->second << " " << mp_s[it->first] << "\n";
            } 
        }
    } else cout << "Impossible\n";
  }
  return 0;
}