#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string s1, s2, s3;
    s1 = to_string(a);
    s2 = to_string(b);
    s3 = to_string(c);
    int n = 0, m = 0, k = 0;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] == '0')
        continue;
        n = (n * 10) + (s1[i] - '0');
    }
    for(int i = 0; i < s2.size(); i++) {
        if(s2[i] == '0')
        continue;
        m = (m * 10) + (s2[i] - '0');
    }
    for(int i = 0; i < s3.size(); i++) {
        if(s3[i] == '0')
        continue;
        k = (k * 10) + (s3[i] - '0');
    }
    if(n + m == k)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}