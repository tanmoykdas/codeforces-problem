#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    set<int> st;
    for(int i = 0; i < n; i++) {
        st.insert(a[i]);
    }
    int ans = 0;
    for(auto it = st.begin(); it != st.end(); it++) {
        ans += (*it - ans);
    }
    cout << ans;
    return 0;
}