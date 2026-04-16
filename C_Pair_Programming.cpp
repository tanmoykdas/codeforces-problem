#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll k, n, m;
  cin >> k >> n >> m;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  bool f = true;
  ll i = 0, j = 0, c = k;
  vector<ll> p, ans;
    for (int l = 0; l < max(a.size(), b.size()); l++) {
        if (i < a.size()) p.push_back(a[i++]);
        if (j < b.size()) p.push_back(b[j++]);
        sort(p.begin(), p.end());
        for (int z = 0; z < p.size(); z++) {
            if (p[z] == 0) {
                c++;
                ans.push_back(0);
            }
            else {
                if (p[z] <= c) ans.push_back(p[z]);
                else {
                    f = false;
                    goto print;
                }
            }
        }
        p.clear();
    }
    print:
    if (f) {
        for (auto x : ans) cout << x << " ";
        cout << endl;
    } else cout << - 1 << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}