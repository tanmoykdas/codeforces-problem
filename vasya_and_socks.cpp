#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        if(i % m == 0)
        n += 1;
    }
    cout << n;
    return 0;
}