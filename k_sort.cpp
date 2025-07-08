#include<bits/stdc++.h>
using namespace std;
void testcase(){
	int n;
	cin >> n;
	int a[n];
	for(auto& x:a) cin >> x;
	long long sum = 0, gap = 0, mx = 0;
	for(int i = 0; i < n; i++){
		if(mx > a[i]){
			sum += mx - a[i];
			gap = max(gap, mx - a[i]);
		}
		mx = max(mx, 1LL * a[i]);
	}
	cout << sum + gap << "\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin >> tc;
	while(tc--){
		testcase();
	}
	return 0;
}