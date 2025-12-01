#include<bits/stdc++.h>
using namespace std; 
void solve(){
    int a, b;
    cin >> a >> b;
    vector<int> v;
    int temp = a;
    while(temp) {
        if (temp % 2) {
            v.push_back(1);
            temp /= 2;
        } else {
            v.push_back(0);
            temp /= 2;
        }
    }
    int size = v.size();
    reverse(v.begin(), v.end());
    for (auto x : v) cout << x << " ";
    cout << endl;
    int possible = pow(2, size);
    if (a == b) {
        cout << 0 << endl;
    } else {
        if (b <= possible) {
            temp = a ^ b;
            cout << "XOR: " << temp << endl;
            int c = 0, cnt = 100;
            vector<int> vv;
            while (cnt--) {
                    if (temp >= (a - 1)) {
                    temp -= (a - 1);
                    vv.push_back(a - 1);
                    } else {
                    vv.push_back(temp);
                    temp = 0;
                    break;
                }
            }
            if (temp == 0) {
                cout << vv.size() << endl;
                sort(vv.begin(), vv.end());
                for (auto x : vv) cout << x << " ";
                cout << endl;
            } else cout << -1 << endl;
        } else cout << -1 << endl;
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