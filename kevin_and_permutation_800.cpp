#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  int t = n / 2;
  int beg = t;
  for(int i = 0; i < (n / 2); i++) {
    cout << beg << " " << beg + t << " ";
    beg--;
  }
  if(n % 2) cout << n;
  cout << endl;
}
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int tc;
cin >> tc;
  while(tc--){
    solve();
  }
  return 0;
}