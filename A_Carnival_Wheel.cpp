#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l, a, b;
    cin >> l >> a >> b;
    int pos = a;
    int cnt = 1;
    int temp = 0;
    for (int i = 0; i < l; i++) {
        int x;
        x = (a + cnt * b) % l;
        cnt++;
        if (x > temp) temp = x;
    }
    cout << temp << "\n";
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