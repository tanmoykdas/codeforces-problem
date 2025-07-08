#include<bits/stdc++.h>
using namespace std;
int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a, b, c;
    a = sqrt((s1 * s2) / s3);
    b = sqrt((s3 * s2) / s1);
    c = sqrt((s3 * s1) / s2);
    int ans = 4 * (a + b + c);
    cout << ans;
    return 0;
}