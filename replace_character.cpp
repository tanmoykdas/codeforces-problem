#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> mp;
  for(auto x : s) mp[x]++;
  // for(auto x : mp) cout << x.first << " " << x.second << endl;
  if(mp.size() == 1) cout << s << endl;
  else {
    int mn = INT_MAX, c_mn;
    int mx = 0, c_mx;
    for(auto x : mp){
      if(x.second < mn){
        mn = x.second;
        c_mn = x.first;
      }
      if(x.second > mx){
        mx = x.second;
        c_mx = x.first;
      }
    }
    bool flag = true;
    if(c_mn == c_mx) {
      for(int i = 0; i < s.size(); i++){
        if(flag) {
          if(s[i] != c_mx) {
            cout << mp.begin()->first;
            flag = false;
          } else cout << s[i];
        } else cout << s[i];
      }
      cout << endl;
    } else {
      // cout << (char)c_mn << " ";
      for(int i = 0; i < s.size(); i++){
        if(flag) {
          if(s[i] == c_mn) {
            cout << (char)c_mx;
            flag = false;
          } else cout << s[i];
        } else cout << s[i];
      }
      cout << endl;
    }
  }
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