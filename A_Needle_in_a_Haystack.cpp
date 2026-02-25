#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s, ss;
    cin >> s; cin >> ss;
    map<char, int> m, mp;
    int in = 0, ind = 0;
    for (auto x : s) m[x]++; for (auto x : ss) mp[x]++;
    for (int i = 97; i <= 122; i++) {
      char c = (char) i;
      if (mp[c] < m[c]) {
        cout << "Impossible\n";
        goto end;
      }
    }
    for (int i = 97; i <= 122; i++) {
        string x = "";
        string y = "";
        bool f = false;
        bool loop = false;
        bool fuck = false;
        char c = (char) i;
        while (mp[c] > m[c]) {
            x.push_back(c);
            mp[c]--;
        }
        for (int j = in; j < s.size(); j++) {
            if (s[j] <= c) {
                ind = j;
                fuck = true;
            }
            else break;
        }
        if (fuck) {
            for (int j = in; j <= ind; j++) {
                y.push_back(s[j]);
                m[s[j]]--;
                mp[s[j]]--;
                if (s[j] < c) f = true;
                loop = true;
            }
            fuck = false;
        }
                
        if (loop) {
            in = ind + 1;
            loop = false;
        }

        string k = "";
        if (f) k = y + x;
        else k = x + y;
        cout << k;
        x = "";
        y = "";
        k = "";
    }
    cout << "\n";
    end:;
  }
}