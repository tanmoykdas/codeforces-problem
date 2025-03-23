#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(2);
    bool p = true;
    for(int i = 3; i <= n; i++) {
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                p = false;
            }
        }
        if(p)
        v.push_back(i);
        p = true;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int c = 0;
        for(int j = 0; j < v.size(); j++) {
            if(i % v[j] == 0)
            c++;
        }
        if(c == 2)
        ans++;
    }
    cout << ans;
    return 0;
}