#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int c = 0, d = 0;
    bool paise = true;
    if (n == 1) cout << 1 << endl;
    else if (s[0] == '*' && s[n - 1] == '*') cout << -1 << endl;
    else if (s[0] == '<' && s[n - 1] == '>') {
        int suru = 0, sesh = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '>' && s[i + 1] == '<') {
                paise = false;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == '<') suru++;
            else if (s[i] == '*') {
                suru++;
                break;
            }
            else break;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '>') sesh++;
            else if (s[i] == '*') {
                sesh++;
                break;
            }
            else break;
        }
        if (paise) cout << max(suru, sesh) << endl;
        else cout << -1 << endl;
    }
    else if (s[0] == '<') {
        for (int i = 0; i < n - 1; i++) {
            if ((s[i] == '<' && s[i + 1] == '<') || (s[i] == '<' && s[i + 1] == '>') || (s[i] == '<' && s[i + 1] == '*')) {
                c++;
            }
            else if (s[i] == '*' && s[i + 1] == '>' && i + 1 == n - 1) {
                c++;
                break;
            } else {
                paise = false;
                break;
            }
        }
        if (s[n - 1] == '*' || s[n - 1] == '<') c++;
        if (paise) cout << c << endl;
        else cout << -1 << endl;
    }
    else if (s[n - 1] == '>') {
        for (int i = n - 1; i > 0; i--) {
            if ((s[i] == '>' && s[i - 1] == '>') || (s[i] == '>' && s[i - 1] == '<') || (s[i] == '>' && s[i - 1] == '*')) {
                d++;
            }
            else if (s[i] == '*' && s[i - 1] == '<' && i - 1 == 0) {
                d++;
                break;
            } else {
                // cout << s[i] << " " << s[i - 1] << endl;
                paise = false;
                break;
            }
        }
        if (s[0] == '*' || s[0] == '>') d++;
        if (paise) cout << d << endl;
        else cout << -1 << endl;
    } 
    else cout << -1 << endl;
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