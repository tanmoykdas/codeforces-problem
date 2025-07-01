#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> a[i][j];
        if (a[i][j] > mx) mx = a[i][j];
      }
    } 
    int c = 0,mxc = 0;
    int ind1 = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] == mx) c++;
      }
      if (c > mxc) {
        ind1 = i;
        mxc = c;
      }
      c = 0;
    }
    for (int i = 0; i < m; i++) {
      a[ind1][i]--;
    }
    int ind = 0;
    c = 0;
    mxc = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] > mx) mx = a[i][j];
      }
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (a[j][i] == mx) c++;
      }
      if (c > mxc && i != ind1) {
        ind = i;
        mxc = c;
      }
      c = 0;
    }
     for (int i = 0; i < n; i++) {
      if (i == ind1) continue;
      a[i][ind]--;
    }
    mx = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] > mx) mx = a[i][j];
      }
    }
    cout << mx << endl;
  }
  return 0;
}