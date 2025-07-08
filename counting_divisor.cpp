#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int c = 0;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                c++;
                if(i != (n / i)) c++;
            }
        }
        cout << c << '\n';
    }
}