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
    vector<int> a;
    a.push_back(INT_MIN);
    for (int i = 0; i < n; i++) { 
      int x;
      cin >> x;
      if (i == 0 || x != a.back()) { 
        a.push_back(x);
      }
    }
    a.push_back(INT_MIN); 

    // for (auto x : a) cout << x << " ";
    // cout << endl;

    int c = 0;
    for (int i = 1; i < a.size() - 1; i++) {
      if (a[i] > a[i - 1] && a[i] > a[i + 1]) c++;
    }
    cout << c << endl; 
  }
  return 0;
}