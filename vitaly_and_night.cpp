#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m * 2];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m * 2; j++) {
            cin >> a[i][j];
        }
    }
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (m * 2) - 1; j += 2) {
            if(a[i][j] || a[i][j + 1])
            c++;
        }
    }
    cout << c;
    return 0;
}