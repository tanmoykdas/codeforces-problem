#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    int m = n;
    bool flag = true;
    int mid = (n /2 ) + (n % 2);
    // cout << "mid: " << mid << endl;
    for(int i = 0; i < mid; i++){
        --m; 
        if(a[i] <= (m * 2)) flag = false;
    }
    m = mid;
    for(int i = mid; i < n; i++){
        if(a[i] <= (m * 2)) flag = false;
        // cout << a[i] << " " << m * 2 << endl;
        m++;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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