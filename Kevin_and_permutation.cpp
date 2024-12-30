#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n, k;
  cin >> n >> k;
  int c = n / k;
  vector<int> v1, v2;
  for(int i = 1; i <= n; i++){
    if(i <= c) v1.push_back(i);
    else v2.push_back(i);
  }
  int l = 0, m = 0;
  for(int i = 0; i < n; i++){
    if((i + 1) % k == 0) {
        cout << v1[l++] << " ";
    } else {
        cout << v2[m++] << " ";
    }
  }
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