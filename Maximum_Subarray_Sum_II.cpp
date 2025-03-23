#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll arr[n], sum = 0, j = 0;
    vector <int> v;
    for (auto &x : arr) cin >> x;
    for(int i = 0; i < n; i++) {
        j = i + 1;
        sum += arr[i];
        if(j % a == 0) {
            v.push_back(sum);
            sum = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        j = i + 1;
        sum += arr[i];
        if(j % b == 0) {
            v.push_back(sum);
            sum = 0;
        } 
    }
    for (auto &x : v) cout << x << " ";
    //cout << *max_element(v.begin(),v.end());
}