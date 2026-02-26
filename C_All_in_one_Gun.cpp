#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) index = i;
    }
    int mn = INT_MAX;
    int swp = 0;
    for (int i = 0; i < index; i++) {
        if (a[i] < mn) {
            mn = a[i];
            swp = i;
        }
    }
    swap(a[swp], a[index]);
    bool f = true;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum >= h) {
            ans = i + 1;
            f = false;
            break;
        }
    }
    if (f) {
        if (h % sum == 0) {
            int cycle = h / sum;
            ans = (cycle * n) + ((cycle - 1) * k);
            cout << ans << endl; 
        } else {
            int need = h / sum;
            sum *= need;
            int in = 0;
            for (int i = 0; i < n; i++) {
                sum += a[i];
                if (sum >= h) {
                    in = i + 1;
                    break;
                }
            }
            int time = ((need * n) + in) + (need * k);
            cout << time << endl;
        }
    } else cout << ans << endl;
  }
  return 0;
}