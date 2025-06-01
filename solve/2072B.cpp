#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '-') c1++;
        else if(s[i] == '_') c2++;
    }
    // cout << c1 << " " << c2 << endl;
    int cokh = c2 / 2;
    cout << min(cokh, c2) << endl;
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