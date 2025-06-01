#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (auto& x : a) cin >> x;
	int sum1 = 0, sum2 = 0;
	sort(a, a + n);
	reverse(a,a + n);
	for (int i = 0; i < n; i++) {
	    if (i == 0) {
	    	sum1 += a[i];
	    } else {
	    	if(sum1 < sum2) sum1 += a[i];
	    	else if (sum2 < sum1) sum2 += a[i];
	    	else sum1 += a[i];
	    }
	}
	cout << sum1 << " " << sum2;
    return 0;
}