#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int r1 = 0, r2 = 0, r3 = 0, p = 0;
        while(n != 0) {
            if(n >= 7) {
                n -= 7;
                ++r3;
            }
            else if(n >= 5) {
                n -= 5;
                ++r2;
            }
            else if(n >= 3) {
                n -= 3;
                ++r1;
            }
            else if(n < 3 && n > 0) {
                p++;
                break;
            }
        }
        //if(p != 0) {
            //cout << -1 << endl;
        //}
        //else {
            cout << r1 << " " << r2 << " " << r3 << endl;
        //}
    }
    return 0;
}