#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int i_digit = 0;
        int i_letter = 0;
        bool con = true, letter = false;
        for (int i = 0; i < n; i++) {
            int temp = (int)s[i];
            if (temp >= 97 && temp <=  122) {
                if(temp >= i_letter)
                    i_letter = temp;
                else
                    con = false;
                letter = true;
            }
            else if (temp >= 48 && temp <= 57) {
                if(temp >= i_digit)
                    i_digit = temp;
                else
                    con = false;
                if(letter)
                    con = false;
            }
        }
        if (con)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}