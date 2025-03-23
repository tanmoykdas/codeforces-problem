#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    for(auto& x : mp) cout << x.first << " " << x.second << endl;
    return 0;
}