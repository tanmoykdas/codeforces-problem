#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int m = n;
    if (m % 2) {
        cout << 0 << endl;
        return;
    }
    if (m % 4 == 0) cout << (m / 4) + 1 << endl;
    else {
        int c = 0;
        while (m > 0) {
            m = m - 4;
            c++;
        }
        cout << c << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}