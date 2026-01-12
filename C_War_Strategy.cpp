#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int left, right;
    left = k - 1; right = n - k;
    if (right > left) swap(left, right);
    int din = 0, jete_parbo = 0;
    for (int i = 0; i < left; i++) {
        if (i == 0 && (din + 1 <= m)) {
            jete_parbo++;
            din += 1;
        } else if (i > 0 && (din + 2 <= m)) {
            jete_parbo++;
            din += 2;
        } else {
            break;
        }
    }
    int din_baki = (m - din);
    if (din_baki && k != 1 && k != n) jete_parbo += din_baki; // base samne ba pichone thakle din baki thakleo lav nei
    jete_parbo++; // karon base hisab korie ni
    if (jete_parbo >= n) cout << n << endl;
    else cout << jete_parbo << endl;
  }
  return 0;
}