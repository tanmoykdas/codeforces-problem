#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0' && s[1] == '0')
            cout << "12:" << s[3] << s[4] << " " << "AM" << endl;
        else if (s[0] == '0' && s[1] != '0')
            cout << s[0] << s[1] << ":" << s[3] << s[4] << " " << "AM" << endl;
        else if (s[0] == '1' && (s[1] == '0' || s[1] == '1'))
            cout << s << " AM" << " " << endl;
        else if (s[0] == '1' && s[1] == '2')
            cout << s << " PM" << endl;
        else if (s[0] == '2' && s[1] == '0')
            cout << "08:" << s[3] << s[4] << " PM" << endl;
        else if (s[0] == '2' && s[1] == '1')
            cout << "09:" << s[3] << s[4] << " PM" << endl;
        else if (s[0] == '2' && s[1] == '2')
            cout << "10:" << s[3] << s[4] << " PM" << endl;
        else if (s[0] == '2' && s[1] == '3')
            cout << "11:" << s[3] << s[4] << " PM" << endl;
        else if (s[0] == '2' && s[1] == '4')
            cout << "12:" << s[3] << s[4] << " PM" << endl;
        else
        {
            int c = s[1];
            int r = abs(s[1] - 50);
            cout << "0" << r << ":" << s[3] << s[4] << " PM" << endl;
        }
    }
}