#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> a(n);
    for (auto &x : a)
      cin >> x;
    int mx = *max_element(a.begin(), a.end());
    long long sum = 0;
    for (auto x : a)
      sum += x;
    
    int x = h;
    x -= mx;

    bool f = true;
    int sm = mx;
    int c = 1;
    for (int i = 0; i < n; i++) {
      if (a[i] == mx && f) {
        f = false;
        continue;
      }

      if (sm >= h) break;
      
      if (sm += a[i] >= h) {
        c++;
        break;
      } else c++;
    }
    cout << c << endl;
  }
  return 0;
}