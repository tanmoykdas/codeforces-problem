#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ca = 0, cb = 0;
    for(auto c : s){
        if(c == 'a') ca++;
        else cb++;
    }
    int c = 0;
    for(int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            c++;
            i++;
        }
    }
    cout << c << endl;
    cout << n - (c * 2) << endl;

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