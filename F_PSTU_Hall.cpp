#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, y;
        cin >> n >> y;
        int a[n];
        for (auto& x : a) cin >> x;
        int pleasent = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != y) {
                pleasent += (a[i] - y);
            } else ++pleasent;
        }

        if (pleasent > 0) {
            cout << "No Ragging at PSTU" << endl;
        } else if (pleasent < 0) {
            cout << "Jayga nia suru kor" << endl;
        } else cout << "Room 404 a dekha korish" << endl;
    }
}