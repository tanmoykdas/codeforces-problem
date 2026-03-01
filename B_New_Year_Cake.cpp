#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int x = 1, y = 1;

    int c = 1, d = 1;

        while(x * 2 <= 1e6 && x * 2 <= a) {
            x *= 2;
            c++;

        }



        while(y * 2 <= 1e6 && y * 2 <= b) {
            y *= 2;
            d++;

        }


    if (c == d) cout << c << endl;
    else cout << (min(c, d) * 2) + 1 << endl; 
    
  }
  return 0;
}