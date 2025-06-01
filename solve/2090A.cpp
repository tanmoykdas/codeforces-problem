#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double x, y, a;
        cin >> x >> y >> a;
        double sum = x + y;
        a += 0.5;
        double c = (a / sum);
        double b_last = sum * (int)c;
        if(b_last + x > a) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}