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
        int czero = 0;
        int ans = 1, j = 0;

        for (int i = 3; i < n; i++) {
            if (s[i] == '0') czero++;
            else {
                ans += (czero / 3);
                czero = 0;
            }

        }
        ans += (czero / 3);
        int cnt = 0;
        for (int i = 3; i < n; i++) {
            if (s[i] == '1') cnt++;
        }
        if (cnt == 0){
            if (n <= 6) cout << 2 << endl;
            else cout << (n / 3) << endl;
        }
        else cout << ans + cnt << endl;
    }
  }
  return 0;
}