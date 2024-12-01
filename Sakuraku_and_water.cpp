#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  int a[n][n];
  int mn = INT_MAX;
  int sum = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }
  int k = 0;
  for(int i =  n - 1; i >= 0; i--){
    k++;
    int h = i;
    mn = INT_MAX;
    for(int j = 0; j < k; j++){
      // cout << j << h << " ";
      // if(a[j][h] < 0 && a[j][h] < mn) mn = a[j][h];
      mn = min(mn, a[j][h]);
      h++;
    }
    if(mn < 0) sum += abs(mn);
  }
  int x = n - 1;
  for(int i = 1; i < n; i++){
    int y = i;
    mn = INT_MAX;
    for(int j = 0; j < x; j++){
      // cout << y << j << " ";
      // if(a[y][j] < 0 && a[y][j] < mn) mn = a[y][j];
      mn = min(mn, a[y][j]);
      y++;
    }
    if(mn < 0) sum += abs(mn);
    x--;
  }
  cout << endl << sum;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int test_case;
  cin >> test_case;
  while(test_case--){
    solve();
  }
  return 0;
}