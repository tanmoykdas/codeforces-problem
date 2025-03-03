#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, n;
    cin >> p >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; 
        if (st.count(p % x)) {
            cout << i + 1;
            return 0;
        }
        st.insert(x % p);
    }
    cout << -1;
    return 0;
}