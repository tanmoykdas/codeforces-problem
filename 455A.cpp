#include<bits/stdc++.h>
using namespace std;
vector<int> v(1000000, 0);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mp;
    for(auto x : a) mp[x]++;
    for(auto x : mp) v[x.first] = x.first * x.second;
    int mx = mp.rbegin()->first;
    if(mx % 3 != 0){
        mx += 1;
        if(mx % 3 != 0) mx += 1;
    }
    // cout << mx << endl;
    long long sum1 = 0, sum2 = 0;
    // for(int i = 1; i <= mx; i++) cout << v[i] << " ";
    // cout << endl;
    for(int i = 1; i <= mx; i += 2) sum1 += v[i];
    for(int i = 2; i <= mx; i += 2) sum2 += v[i];
    // cout << sum1 << " " << sum2;
    cout << max(sum1, sum2) << endl;
    // cout << endl;
    // for(int i = 1; i <= mx; i += 3){
    //     int m = max(v[i], v[i + 1]);
    //     sum += max(m, v[i + 2]);
    //     cout << i << " " << sum << endl;
    // }
    // cout << sum << endl;
    return 0;
}