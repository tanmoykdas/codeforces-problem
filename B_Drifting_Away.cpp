#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != '<' && s[i + 1] != '>') {
            cout << "-1\n";
            return;
        }
    }
    int left = 0, right = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') left++;
        else if (s[i] == '>') right++;
    }
    cout << s.size() - min(left, right) << "\n";
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