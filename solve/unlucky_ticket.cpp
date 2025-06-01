#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v1, v2;
    for(int i = 0; i < n * 2; i++) {
        int temp;
        temp = s[i] - '0';
        if(i < n)
        v1.push_back(temp);
        else
        v2.push_back(temp);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int sm = 0, sl = 0;
    for(int i = 0; i < n; i++) {
        if(v1[i] > v2[i])
        sm++;
        else if(v1[i] < v2[i])
        sl++;
    }
    if(sm == n || sl == n)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}