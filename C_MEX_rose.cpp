#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n, k;
    std::cin >> n >> k;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        mp[a]++;
    }
    
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        if (mp.find(i) == mp.end()) {
            ans++;
        }
    }
    ans = std::max(ans, mp[k]);
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
