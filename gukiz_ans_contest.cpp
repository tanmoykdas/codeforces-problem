#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n]; 
    for(auto& x : a) cin >> x;
    for(int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    map<int, int> mp;
    int c = 1;
    int temp = c;
    mp[a[0]] = c;
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1])
        mp[a[i]] = temp;
        else {
            temp = c + 1;
            mp[a[i]] = temp;
        }
        c++;
    }
    for(int i = 0; i < n; i++) {
        cout << mp[b[i]] << " ";
    }
    return 0;
}