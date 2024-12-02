#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
      int n, a , b;
      cin >> n >> a >> b;
      string s;
      cin >> s;
      cout << s;
      int x = 0, y = 0;
      for(int i = 0; i < s.size(); i++){
        if(s[i] == 'N') y += 1;
        else if(s[i] == 'E') x += 1;
        else if(s[i] == 'S') y -= 1;
        else x -= 1;
        if(x == a && y == b) break;
      }
      bool flag = false;
      if(x == 0 && y == 0) flag = false;
      else if(a % x == 0 && b % y == 0){
        int aa = a / x;
        int bb = b / y;
        if(aa == bb) flag = true;
      } else if(x == a && y == b) flag = true;
      if(flag) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    return 0;
}