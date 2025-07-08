#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int ans = ((n * y) / 100) + ((n * y) % 100 != 0);
    if(ans > x)
    cout << ans - x;
    else
    cout << 0;
    return 0;
}