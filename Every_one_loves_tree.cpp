#include<bits/stdc++.h>
using namespace std;

void test_case() {
  int n;
  cin >> n;
  if(n % 2){
  	if(n < 5) cout << -1 << endl;
  	else{
  		for(int i = 0; i < n - 4; i++) cout << 3;
  		cout << 6366 << endl;
  	}
  }else{
  	for(int i = 0; i < n - 2; i++) cout << 3;
  	cout << 66 << endl;
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