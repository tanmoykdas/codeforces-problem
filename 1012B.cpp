#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '1'){
                bool upward = true, backward = true;
                for(int k = i; k >= 0; k--){
                    if(a[k][j] == '0') upward = false;
                    // cout << a[k][j] << " ";
                }
                // cout << endl;
                for(int k = j; k >= 0; k--){
                    if(a[i][k] == '0') backward = false;
                    // cout << a[i][k] << " ";
                }
                if(upward == false && backward == false) flag = false;
                // cout << endl << "flag: " << flag << endl;
            }
        }
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