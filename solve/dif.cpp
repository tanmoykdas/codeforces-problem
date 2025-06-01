#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1;
        vector<char> v;
        for(int i = 0; i < s1.size(); i++) {
            v.push_back(s1[i]);
        }
        s2 = s1[s1.size() - 1];
        v.pop_back();
        for(int i = 0; i < v.size(); i++) {
            s2 += v[i];
        }
        //cout << s1 << " " << s2 << endl;
        if(s1 == s2)
        cout << "NO" << endl;
        else
        cout << "YES" << endl << s2 << endl;
    }
    return 0;
}