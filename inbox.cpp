#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], c = 0;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        v.push_back(a[i]);
    }
    while(true) {
        if(v[v.size() - 1] == 0)
        v.pop_back();
        else
        break;
    }
    reverse(v.begin(),v.end());
    while(true) {
        if(v[v.size() - 1] == 0)
        v.pop_back();
        else
        break;
    }
    int k = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 1)
        c++;
        if(v[i] == 0)
        k++;
        else {
            if(k > 0) {
                k = 0;
                c++;
            }
        }
    }
    cout << c;
    return 0;
}