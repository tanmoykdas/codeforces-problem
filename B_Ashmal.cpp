#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string final;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (final + s > s + final) {
            final = s + final;
        } else {
            final = final + s;
        }
    }
    cout << final << "\n";
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