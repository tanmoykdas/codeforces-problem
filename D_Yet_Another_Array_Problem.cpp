#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto& x : a) cin >> x;

    int b[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};

    long long mn;
    mn = *min_element(a.begin(), a.end());

    if (mn % 2) cout << 2 << '\n';
    else {
        int ans;
        ans = INT_MAX;
        for (auto x : b) {
            for (int i = 0; i < n; i++) {
                if (a[i] % x) {
                    if (x < ans) ans = x;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
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