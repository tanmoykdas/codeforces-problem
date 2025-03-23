#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(auto& x : a) cin >> x;
        for(int i = 0; i < n - 1; i++){
            if(a[i] - a[i + 1] == 1) swap(a[i], a[i + 1]);
        }
        bool flag = true;
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] - a[i] != 1) flag = false;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}