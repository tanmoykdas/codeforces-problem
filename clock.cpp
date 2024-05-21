#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        set<int> s;
        int s1, s2;
        s1 = min(a, b);
        s2 = max(a,b);
        for(int i = s1; i < s2; i++) {
            int temp = i;
            s.insert(temp);
        }
        int e1, e2;
        e1 = s.count(x);
        e2 = s.count(y);
        if((e1 == 0 && e2 ==  1) || (e2 == 0 && e1 == 1))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}