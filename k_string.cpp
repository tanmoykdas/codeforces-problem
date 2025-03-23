#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.size() % n == 0) {
        sort(s.begin(), s.end());
        set<char> st;
        for(int i = 0; i < s.size(); i++) {
            st.insert(s[i]);
        }
        bool ans = true;
        int c = 0;
        vector<char> v;
        for(auto it = st.begin(); it != st.end(); it++) {
            for(int j = 0; j < s.size(); j++) {
                if(s[j] == *it)
                c++;
            }
            if(c % n == 0) {
                for(int i = 0; i < (c / n); i++) {
                    v.push_back(*it);
                }
            }
            else {
                ans = false;
                break;
            }
            c = 0;
        }
        if(ans) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < v.size(); j++) {
                    cout << v[j];
                }
            }
        }
        else 
        cout << -1;
    }
    else
    cout << -1;
    return 0;
}