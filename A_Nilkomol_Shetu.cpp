#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int i, baki;
    vector<int> c(n), b(n);
    for (auto& x : c) cin >> x;
    for (auto& x : b) cin >> x;

    int one = 0, two = 0, on = 0, to = 0;

    if (n == 1) {
        cout << c[0] << " " << b[0];
        return 0;
    }
    int cntt = 0;
    for (int i = 0; i < n; i += 2) {
        one = one + c[i];
        on += b[i];
        ++cntt;
        // cout << c[i] << " ";
        if (cntt == m) {
            break;
        }
    }
    // cout << endl;
    int cnt = 0;
    for (int i = 1; i < n; i += 2) {
        two += c[i];
        to += b[i];
        ++cnt;
        if (cnt == m) {
            break;
        }
    }
    // cout << one  << two << endl;
    if (one < two) {
        int baki = m - cntt;
        int i = 1;
        while (baki--) {
            one += c[i];
            on += b[i];
             
            i += 2;
        }
        cout << one << " " << on;
        
    } else if (two < one) {
        int baki = m - cnt;
        // cout << baki << endl;
        int i = 0;
        while (baki--) {
            two += c[i];
            to += b[i];
             
            i += 2;
        }
        cout << two << " " << to;
    } else {
        baki = m - cntt;
        i = 1;
        while (baki--) {
            one += c[i];
            on += b[i];
             
            i += 2;
        }
        // cout << one << " " << on;

        baki = m - cnt;
        // cout << baki << endl;
        i = 0;
        while (baki--) {
            two += c[i];
            to += b[i];
             
            i += 2;
        }
        // cout << two << " " << to;

        if (one < two) cout << one << " " << on;
        else if (two < one) cout << two << " " << to;
        else cout << one << " " << max(two, to);
    }
}