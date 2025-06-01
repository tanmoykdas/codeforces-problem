#include<bits/stdc++.h>
using namespace std;
int main() {
    int p1, p2, t1, t2;
    cin >> p1 >> p2 >> t1 >> t2;
    int mx1 = max(((3 * p1) / 10), (p1 - (p1 * t1) / 250));
    int mx2 = max(((3 * p2) / 10), (p2 - (p2 * t2) / 250));
    //cout << mx1 << " " << mx2;
    if(mx1 > mx2)
    cout << "Misha";
    else if(mx2 > mx1)
    cout << "Vasya";
    else
    cout << "Tie";
    return 0;
}