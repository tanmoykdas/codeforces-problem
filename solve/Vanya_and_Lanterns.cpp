#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    int a[n];
    for(auto& x : a) cin >> x;
    sort(a, a + n);
    double mx = 0;
    for(int i = n - 1; i > 0; i--) {
        int temp = a[i] - a[i - 1];
        if(temp > mx)
        mx = temp;
    }
    double ans;
    double len;
    len = max(a[0] - 0, l - a[n - 1]);
    ans = max((mx / 2), len);
    cout << fixed;
    cout << setprecision(10);
    cout << ans << endl;
    return 0;
}