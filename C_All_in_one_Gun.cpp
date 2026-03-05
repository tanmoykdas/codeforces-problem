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
    vector<pair<int, int>> p;
    int mx = 0;
    for (int i = n - 1; i >= 0; i--) {
      mx = max(mx, a[i]);
      p.push_back(make_pair(a[i], mx));
    }
    reverse(p.begin(), p.end());
    long long sum = 0;
    for (auto x : a) sum += x;
    if (h <= sum) {
      int x = 0, c = 0;
      for (auto i = p.begin(); i != p.end(); i++) {
        if (x + i->second >= h) {
          c++;
          break;
        } else {
          x += i->first;
          c++;
        }
      }
      cout << c << endl;
    } else {
      int cycle = h / sum;
      if (h % sum) {
        long long remain = h - (sum * cycle);
        int x = 0;
        h = remain;
        int c = 0;
        
        for (auto i = p.begin(); i != p.end(); i++) {
          if (x + i->second >= h) {
            c++;
            break;
          } else {
            x += i->first;
            c++;
          }
        }
        cout << (n * cycle) + (cycle * k) + c << endl;
      } else cout << (n * cycle) + ((cycle - 1) * k) << endl;
   
  return 0; }
  }
}