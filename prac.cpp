#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;

    int c = 0;
    int j;

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            a[i] = 0;
            j = i;
            c++;
        }
    }

    long long sum = 0;
    for (int i = 1; i < n; i++) {  // FIXED
        sum += (a[i] - a[i - 1]);
    }
    cout << sum << endl;
}
