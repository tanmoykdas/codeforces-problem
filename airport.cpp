#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for(auto& x : a) cin >> x;
    vector<int> v;
    int k = 0;
    sort(a, a + m);
    for(int i = 0; i < m; i++) {
        for(int j = a[k]; j >= 1; j--) {
            v.push_back(j);
        }
        k++;
    }
    int max = 0, min = 0;
    for(int i = 0; i < n; i++) {
        min += v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; i++) {
        max += v[i];
    }
    cout << max << " " << min;
    return 0;
}