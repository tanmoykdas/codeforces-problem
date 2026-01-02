#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    bool paise = 0, infinite = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '>') paise = 1;
        if (s[i] == '<' && paise) infinite = 1;
    }

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '*' && s[i + 1] == '*') infinite = 1;
    }

    if (infinite) {
        cout << "-1\n";
    } else {
        int bam_dik = 0, dan_dik = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<' || s[i] == '*') bam_dik++;
            else break;
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '>' || s[i] == '*') dan_dik++;
            else break;
        }
        int ans = max(bam_dik, dan_dik);
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            st.insert(s[i]);
        }
        if (st.size() == 1 && s.size() > 1 && st.count('*')) {
            cout << "-1\n";
            return;
        } else if (st.size() == 1 && s.size() == 1 && st.count('*')) {
            cout << "1\n";
            return;
        }
        if (bam_dik > dan_dik) {
            if (s[0] == '<') cout << bam_dik << "\n";
            else cout << -1 << "\n";
        } else if (dan_dik > bam_dik) {
            if (s[s.size() -1] == '>') cout << dan_dik << "\n";
            else cout << -1 << "\n";
        }
        else {
            if (s[0] != '*' || s[s.size() -1] != '*') {
                cout << ans << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}