#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for(int i = 0; i < 12; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    int c = 0;
    if(n != 0) {
        for(int i = 0; i < v.size(); i++) {
            if(n > 0) {
                //cout << n << " " << v[i] << endl;
                n -= v[i];
                c++;
            }
            if(n == 0 || n < 0)
            break;
        }
        cout << endl;
        if(n <= 0)
        cout << c;
        else
        cout << -1;
    }
    else
    cout << 0;
    return 0;
}