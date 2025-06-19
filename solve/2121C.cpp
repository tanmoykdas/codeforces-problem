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
        for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> a[i][j];
        
        int mx = INT_MIN, in_i; // Initialize mx to INT_MIN
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] > mx) {
                    mx = a[i][j];
                    in_i = i;
                }
            }
        }
        
        int mxx = INT_MIN, in_j; // Initialize mxx to INT_MIN
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] > mxx && i != in_i) {
                    mxx = a[i][j];
                    in_j = j;
                }
            }
        }
        
        cout << mx << " " << mxx << "\n";
        cout << in_i + 1 << " " << in_j + 1 << "\n";
    }
    return 0;
}