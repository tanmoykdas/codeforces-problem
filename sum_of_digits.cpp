#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    if(s.size() == 1) {
        cout << 0;
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }
    int c = 0;
    int temp = sum;
    int x = 0;
    int t = 0;
    if(sum >  0)
    c++;
    while(sum >= 10) {
        while(temp != 0) {
            
            t = temp % 10;
            x += t;
            temp /= 10;
        }
        c++;
        sum = x;
        temp = sum;
        x = 0;
        t = 0;
        //cout << sum << " ";
    }
    cout << c;
}