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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    bool rev = false;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            rev = true;
            index = i;
            break;
        }
    }
    int mx = *max_element(a.begin() + index, a.end());
    if (!rev) {
        for (auto x : a) cout << x << " ";
        cout << "\n";
    } else {
        for (int i = 0; i < index; i++) cout << a[i] << " ";
        int pos = -1;
        for (int i = index; i < n; i++) {
            if (a[i] == mx) {
                pos = i;
                break;  
            }
        }
        for (int i = pos; i >= index; i--) {
            cout << a[i] << " ";
        }
        for (int i = pos + 1; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
  }
  return 0;
}