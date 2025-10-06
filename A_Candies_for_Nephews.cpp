#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if (n % 3 == 0) cout << 0 << "\n";
    else if ((n + 1) % 3 == 0) cout << 1 << "\n";
    else cout << 2 << "\n";
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