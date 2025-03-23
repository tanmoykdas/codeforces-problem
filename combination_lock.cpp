 #include<bits/stdc++.h>
 using namespace std;
 int main() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for(int i = 0; i < s1.size(); i++) {
        int mx, mn;
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        mx = max(a, b);
        mn = min(a, b);
        int e1, e2;
        e1 = mx - mn;
        e2 = (9 - mx) + (mn - 0) + 1;
        //cout << e1 << " " << e2 << endl;
        ans += min(e1, e2);
    }
    cout << ans;
    return 0;
 }