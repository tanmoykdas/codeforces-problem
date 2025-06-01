#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(auto& x : a) cin >> x;
        set<int> s;
        for(int i = 0; i < n; i++) {
            int temp = a[i];
            s.insert(temp);
        }
        vector<int> v;
        int c = 0;
        for(auto it = s.begin(); it != s.end(); it++) {
            for(int i = 0; i < n; i++) {
                if(a[i] == *it)
                c++;
            }
            v.push_back(c);
            c = 0;
        }
        int sum = 0;
        for(int i = 0; i < v.size(); i++) {
            sum += v[i] / 3;
        }
        cout << sum << endl;
    }
    return 0;
}