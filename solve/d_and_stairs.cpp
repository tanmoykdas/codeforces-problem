#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = n / 2; i >= 0; i--) {
        if((n - i) % m == 0) {
            cout << n - i;
            return 0;
        }
    }
    cout << - 1;
}