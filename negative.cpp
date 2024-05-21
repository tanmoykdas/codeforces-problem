#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(auto& x : a) cin >> x;
        sort(a, a + n);
        for(int i = 0; i < n - 1; i++) {
            if(a[i] < 0 && a[i + 1] < 0) {
                a[i] = abs(a[i]);
                a[i + 1] = abs(a[i + 1]);
            }
            else if(a[i] < 0 && a[i + 1] >= 0) {
                int temp = abs(a[i]);
                if(temp > a[i + 1]) {
                    a[i] = abs(a[i]);
                    a[i + 1] *= -1;
                }
            }
        }
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}