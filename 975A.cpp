#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s[n];
    set<char> st;
    for(int i = 0; i < n; i++){
        string ss;
        cin >> ss;
        for(int j = 0; j < ss.size(); j++){
            st.insert(ss[j]);
        }
        for(auto it = st.begin(); it != st.end(); it++){
            s[i] += *it;
        }
        st.clear();
    }
    sort(s, s + n);
    set<string> stt;
    for(int i  = 0; i < n; i++) stt.insert(s[i]);
    cout << stt.size();
    return 0;
}