#include<bits/stdc++.h>
using namespace std;

void test_case() {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int x = 0, y = 0;
  int c = 0, d = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'N') y += 1;
    else if(s[i] == 'E') x += 1;
    else if(s[i] == 'W') {
      x -= 1;
      c++;
    }
    else{
      y -= 1;
      d++;
    }
    if(x == a && y == b) break;
  } 
  if(x == 0 && y == 0){
    cout << "NO" << endl;
  } else if(x == a && y == b){
    cout << "YES" << endl;
  } else{
    bool flag = false;
    while(x <= 10 + c && y <= 10 + d){
      for(int i = 0; i < s.size(); i++){
        if(s[i] == 'N') y += 1;
        else if(s[i] == 'E') x += 1;
        else if(s[i] == 'W') x -= 1;
        else y -= 1;
        // cout << x << " " << y << endl;
        if(x == a && y == b){
          
          flag = true;
          break;
        } 
      }
      if(flag) break;
      if(x < -10 || y < -10) break;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    test_case();
  }
  return 0;
}