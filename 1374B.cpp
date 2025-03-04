#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int c = 0;
    bool flag = true;
    while(n > 1){
        if(n % 6 == 0) n /= 6;
        else {
            if((n * 2) % 3 == 0 || (n * 2) % 6 == 0) n *= 2;
            else {
                flag = false;
                break;
            }
        }
        c++;
    }
    if(flag) cout << c << endl;
    else cout << -1 << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}