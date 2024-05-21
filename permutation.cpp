#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    int c = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] == i) {
                c++;
                break;
            }
        }
    }
    cout << n - c;
    return 0;
}