#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, b;
    cin >> n >> a;
    vector<int> v(n);
    for(auto& x : v) cin >> x;
    int choto = 0, boro = 0;
    for(auto x : v){
        if(x < a) choto++;
        else if(x > a) boro++;
    }
    // cout << choto << " " << boro << "\n";
    if (choto > boro) cout << a - 1 + 1 << "\n";
    else if (boro > choto) cout << a + 1 << "\n";
    else cout << a + 1 << "\n";
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