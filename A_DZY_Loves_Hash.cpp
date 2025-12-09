#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, n;
    cin >> p >> n;
    int a[n];
    set<int> st;
    for(auto& x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        int temp = a[i] % p;
        // cout << temp << " ";
        if (st.count(temp) == 1) {
            cout << i + 1;
            return 0;
        } else st.insert(temp);
    }
    cout << -1;
    return 0;
}