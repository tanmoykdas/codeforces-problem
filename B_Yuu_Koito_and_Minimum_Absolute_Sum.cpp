#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (auto& x : a) cin >> x;
    int b = 0, c = 0, j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            a[i] = 0;
            c++;
            j = i;
        }
    }
    long long sum = 0;
    for (int i = 1; i < n; i++) {
        sum += (a[i] - a[i - 1]);
    }
    if (c == 0) {
        cout << abs(sum) << endl;
        for (auto x : a) cout << x << " ";
        cout << endl;
    } else if (c == 1) {
        int optn = 0;
        a[j] = abs(sum);
        for (int i = 1; i < n; i++) {
            optn += (a[i] - a[i - 1]);
        }
        optn = abs(optn);
        if (optn < abs(sum)) {
            cout << optn << endl;
            for (auto x : a) cout << x << " ";
            cout << endl;
        } else {
            a[j] = 0;
            cout << abs(sum) << endl;
            for (auto x : a) cout << x << " ";
            cout << endl;
        }
    } else {
        cout << 0 << endl;
        a[j] = abs(sum);
        for (auto x : a) cout << x << " ";
        cout << endl;
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