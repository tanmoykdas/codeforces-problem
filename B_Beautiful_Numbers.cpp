#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    string ss = s;

    sort(ss.begin(), ss.end());
    map<char, int> m;
    for (auto x : s) m[x]++;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }

    if (sum <= 9) {
        cout << 0 << endl;
    } else {
        int c = 0;
        int l = s.size() - 1;
        while (sum > 9) { 
            if (m[ss[l]] == 1 && s[0] == ss[l]) {
                l--;
                continue;
            }
            sum -= (ss[l] - '0');
            // cout << sum << " " << ss[l] << endl;
            m[ss[l]]--;
            c++;
            l--;
        }
        cout << c << endl;
    }
  }
  return 0;
}