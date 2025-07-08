#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    set<char> st;
    bool flag = true;
    for(int i = 0; i < s.size(); i++){
        st.insert(s[i]);
    }
    if(st.size() == 1) cout << "NO" << endl;
    else{
        
        if(m == 0){
            string temp = s;
            reverse(temp.begin(), temp.end());
            if(s < temp) cout << "YES" << endl;
            else cout << "NO" << endl;
            // cout << temp << endl;
        } else cout << "YES" << endl;
    }
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