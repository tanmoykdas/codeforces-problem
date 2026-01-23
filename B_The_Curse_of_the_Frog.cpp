#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    long long ans = INT_MAX;
    long long c = 0;
    while (n--) {
        long long rollback = 0;
        long long ai, bi, ci;
        cin >> ai >> bi >> ci;
        if (ci >= ai) {
            ++c;
            continue;
        }
        long long rollbackage = bi - 1;
        long long jaite_parbo = rollbackage * ai;
        if (jaite_parbo <= k) ans = min(rollback, ans);
        else {
            while (jaite_parbo < k) {
                jaite_parbo = jaite_parbo - ci + ai;
                jaite_parbo += (rollbackage * ai);
                rollback++;
            }
        }
        ans = min(ans, rollback);
    }
    if (c == n) cout << -1 << endl;
    else cout << ans << endl;
  }
  return 0;
}