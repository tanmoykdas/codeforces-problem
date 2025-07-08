#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<int> v;
    for(auto& x : a) cin >> x;
    int c = 0, element = 0;
    for(int i = 0; i < n - k + 1; i++) {
        for(int j = i; j < n; j++) {
            ++c;
            cout << a[j] << " ";
            if(c == k) {
                c = 0;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}