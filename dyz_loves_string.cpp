#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    int a[26];
    for(auto& x : a) cin >> x;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        ans += ((i + 1) * a[s[i] - 'a']);
    }
    int c = 0;
    sort(a, a + 26);
    reverse(a, a + 26);
    int temp = s.size() + 1;
    for(int i = 0; i < n; i++) {
        ans += (temp * a[0]);
        temp++;
    }
    cout << ans;
    return 0;
}