#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (auto& x : a) cin >> x;
        sort(a, a + n);
        int median;
        if (n % 2 == 0)
        median = (n / 2);
        else
        median = (n / 2) + 1;
        int increased_median = a[median - 1] + 1;
        int operation = 0;
        for ( int i = median - 1; i < n; ++i) {
            if (a[i] < increased_median)
            operation += (increased_median - a[i]);
        }
        cout << operation << '\n'; 
    }
    return 0;
}