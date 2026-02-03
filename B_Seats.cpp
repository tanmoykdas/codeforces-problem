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
    string s;
    cin >> s;
    if (n < 3) cout << 1 << endl;
    else if (n == 3) {
        if (s == "100" || s == "001" || s == "101") cout << 2 << endl;
        else cout << 1 << endl;
    }
    else {
        set<char> st;
        for (auto x : s) st.insert(x);
        if (s[0] == '0' && s[1] == '0') s[0] = '1';
        if (s[n - 1] == '0' && s[n - 2] == '0') s[n - 1] = '1';
        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '0' && s[i + 1] == '0') {
                s[i] = '1';
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cnt++;
        }
        for (auto x : s) cout << x;
        cout << endl;
        sort(s.begin(), s.end());
        if (st.size() == 1)
            cout << n / 2 << endl;
        else
            cout << cnt << endl;
    }
  }
  return 0;
}