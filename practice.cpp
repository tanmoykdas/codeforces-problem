#include<bits/stdc++.h>
using namespace std;
int c = 1;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    int mx = a[0];
    int pos = 0;
    vector<int> v;
    v.push_back(1);
    for(int i = 1; i < n; i++){
        if (a[i] < mx) {
            v.clear();
            pos = 0;
        } else if ( a[i] == mx){
            v.clear();
            pos = 0;
        } 
        else {
            pos = i + 1;
            v.push_back(pos);
            mx = a[i];
        }
        for (auto x : v) cout << x << " ";
        cout << endl;
    }
    
    cout << "Case" << " " << c << ":" << " ";
    c++;
    sort(v.begin(), v.end());
    
    if (v.size()) cout << v[0] << '\n'; 
    else cout << "Humadity is doomed!" << '\n';
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