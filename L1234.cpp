#include<bits/stdc++.h>
using namespace std;

int balancedString(string s) {
        sort(s.begin(), s.end());
        vector<char> ss;
        int one = s.size() / 4;
        int w = 0, q = 0, r = 0, e = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'W') w++;
            else if (s[i] == 'Q') q++;
            else if (s[i] == 'R') r++;
            else if (s[i] == 'E') e++;
        }
        for (int i = 0; i < one; i++) {
            ss.push_back('W');
        }
        for (int i = 0; i < one; i++) {
            ss.push_back('Q');
        }
        for (int i = 0; i < one; i++) {
            ss.push_back('R');
        }
        for (int i = 0; i < one; i++) {
            ss.push_back('E');
        }
        sort(ss.begin(), ss.end());
        for(auto x : ss) cout << x << " ";
        cout << endl;
        
        // for (auto x : s) cout << x << " ";

        int ans = 0;
        ans += ((e < one) ? (one - e) : 0);
        ans += ((r < one) ? (one - r) : 0); 
        ans += ((q < one) ? (one - q) : 0);
        ans += ((w < one) ? (one - w) : 0);

        for (int i = 0; i < one; i++) {
            if (e) {
                cout << "E ";
                e--;
            } else cout << ". ";
        }
        for (int i = 0; i < one; i++) {
            if (q) {
                cout << "Q ";
                q--;
            } else cout << ". ";
        }
        for (int i = 0; i < one; i++) {
            if (r) {
                cout << "R ";
                r--;
            } else cout << ". ";
        }
        for (int i = 0; i < one; i++) {
            if (w) {
                cout << "W ";
                w--;
            } else cout << ". ";
        }
        return ans;
    }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    cout << balancedString(s);
    return 0;
}