#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    set<char> st;
    bool ans = false;
    st.insert(s[0]);
    st.insert(s[n - 1]);
    for (int i = 1; i < n - 1; i++) {
        if (st.count(s[i]) > 0) {
            ans = true;
            break;
        }
        st.insert(s[i]);
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
  return 0;
}