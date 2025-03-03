#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int total = (4 * m) * n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(i > 0){
            int temp1 =  m - a;
            int temp2 = m - b;
            total -= ((temp1 + temp2) * 2);
        }
    }
    cout << total << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}