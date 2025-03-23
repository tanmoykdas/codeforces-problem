#include <iostream>
using namespace std;

int main() {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string ss;
    cin >> ss;
    if(c == 'R') {
        for(int i = 0; i < ss.size();i++){
            for(int j = 0; j < s.size(); j++) {
                if(ss[i] == s[j]) {
                    cout << s[j - 1];
                    break;
                }
            }
        }
    } else if(c== 'L') {
        for(int i = 0; i < ss.size();i++){
            for(int j = 0; j < s.size(); j++) {
                if(ss[i] == s[j]) {
                    cout << s[j + 1];
                    break;
                }
            }
        }
    }
    return 0;
}