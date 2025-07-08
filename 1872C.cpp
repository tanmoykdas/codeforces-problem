#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        if (r < 4) {
            cout << -1 << '\n';
            continue;
        }
        if ((r - l) >= 1) {
            if (r % 2 == 0) cout << 2 << " " << r - 2 << '\n';
            else cout << 2 << " " << r - 1 - 2 << '\n';
        } else {
            if (l % 2 == 0) {
                cout << 2 << " " << l - 2 << '\n';
            } else {
                bool found = false;
                for (int d = 3; d * d <= l; ++d) {
                    if (l % d == 0) {
                        cout << d << " " << l - d << '\n';
                        found = true;
                        break;
                    }
                }
                if (!found) cout << -1 << '\n';
            }
        }
    }
    return 0;
}