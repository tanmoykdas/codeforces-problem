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
        int c = 0, p,num1 = 0, num2 = 0, k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != '0')
            c++;
            if (c <= 1)
            {
                if(i == 0)
                num1 = int(s[i] - '0');
                else
                num1 = (10 * num1) + int(s[i] - '0');
            }
            else 
            {
                if(k == 0)
                num2 = int(s[i] - '0');
                else
                num2 = (10 * num2) + int(s[i] - '0');
                k++;
            }
        }
        if(num2 > num1)
        cout << num1 << " " << num2 << endl;
        else
        cout << -1 << endl;
    }
    return 0;
}