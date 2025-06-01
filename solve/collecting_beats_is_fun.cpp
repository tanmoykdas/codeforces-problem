#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    n *= 2;
    char a[5][5];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    bool ans = true;
    for(int i = 1; i <= 9; i++) {
        int c = 0;
        for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 4; k++) {
                if(a[j][k] - '0' == i)
                c++;
            }
            if(c > n)
            ans = false;
        }
    }
    if(ans)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}