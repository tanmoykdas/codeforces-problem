#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    vector<int> v1, v2, v3;
    vector<int>::iterator it;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0)
        v1.push_back(a[i]);
        else if(a[i] == 0)
        v3.push_back(a[i]);
        else
        v2.push_back(a[i]);
    }
    cout << endl;
    if(v2.size() == 0) {
        v2.push_back(v1[v1.size() - 1]);
        v2.push_back(v1[v1.size() - 2]);
        v1.pop_back();
        v1.pop_back();
    }
    if(v1.size() % 2 == 0) {
        v3.push_back(v1[v1.size() - 1]);
        v1.pop_back();
    }
    cout << v1.size() << " ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << v2.size() << " ";
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << v3.size() << " ";
    for(int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    return 0;
}