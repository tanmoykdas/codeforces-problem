#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st1, st2;
        vector<int> v1, v2;
        int temp = 0;
        for(int i = 0; i < s.size(); i++) {
            st1.insert(s[i]);
            temp = st1.size();
            v1.push_back(temp);
        }
        temp = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            st2.insert(s[i]);
            temp = st2.size();
            v2.push_back(temp);
            
        }
        reverse(v2.begin(),v2.end());
        int mx = 0;
        int sum;
        for(int i = 0; i < v1.size() - 1; i++) {
            sum = v1[i] + v2[i + 1];
            if(sum > mx)
            mx = sum; 
        }
        cout << mx << endl;
    }
    return 0;
}